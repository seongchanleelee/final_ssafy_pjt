// Copyright (c) 2021 homuler
//
// Use of this source code is governed by an MIT-style
// license that can be found in the LICENSE file or at
// https://opensource.org/licenses/MIT.

using System.Collections.Generic;
using UnityEngine;
using System.Collections;
namespace Mediapipe.Unity
{
  public class DetectionListAnnotationController : AnnotationController<DetectionListAnnotation>
  {
    [SerializeField, Range(0, 1)] private float _threshold = 0.0f;
    /*[SerializeField] ObjectTotal objectTotal;
    public string _find = ObjectTotal.objectLabel[ObjectTotal._index];*/
    private IList<Detection> _currentTarget;
    public static Hashtable hash = new Hashtable();
    private int hindex = 0;
    public void DrawNow(IList<Detection> target)
    {
      _currentTarget = target;
      SyncNow();
      //FindResult();
      hash.Add(hindex++, target);
    }

    public void DrawNow(DetectionList target)
    {
      DrawNow(target?.Detection);
    }

    public void DrawLater(IList<Detection> target)
    {
      UpdateCurrentTarget(target, ref _currentTarget);
      //FindResult();
      hash.Add(hindex++, target);
    }

    public void DrawLater(DetectionList target)
    {
      DrawLater(target?.Detection);
    }

    protected override void SyncNow()
    {
      isStale = false;
      annotation.Draw(_currentTarget, _threshold);
    }

/*    public void FindResult()
    {
      Logger.LogDebug("---currentTarget count: " + _currentTarget.Count);
      for (var i = 0; i < _currentTarget.Count; i++)
      {
        var tar = _currentTarget[i].Label;
        string s1 = tar.ToString();
        string[] sarray = s1.Split('"');
        s1 = sarray[1];
        Logger.LogDebug("----Detection Controller: " + s1);
        if (s1.Equals(_find))
        {
          Logger.LogDebug("성공");
          objectTotal.MissonSuccess();
          return;
        }
        else
        {
          Logger.LogDebug("실패");
        }
      }
    }*/
  }
}

from flask import (Flask, send_file , url_for, jsonify, render_template)

app = Flask(__name__)

@app.route('/')
def index():
    return render_template('index.html')

@app.route('/private')
def private():
    return render_template('private.html')

@app.route('/download')
def download_file():
    file_name = f"apk/savemalang.apk"
    return send_file(file_name,
					 mimetype='application/vnd.android.package-archive',
					 attachment_filename='malang.apk',  # 다운받아지는 파일 이름.
					 as_attachment=True)

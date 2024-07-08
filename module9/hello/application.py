from flask import Flask, render_template, request

app = Flask(__name__)

@app.route("/")
def index():
    return render_template("index.html", name=request.args.get("name"))

@app.router("/greet")
def greet():
    return render_template("greet.html")

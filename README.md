<!doctype html>
<html lang="en">
<head>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width,initial-scale=1">
  <title>Unit 1 — C++ Programming (README)</title>
  <style>
    :root{--bg:#0f1724;--card:#0b1220;--muted:#94a3b8;--accent:#60a5fa;--glass:rgba(255,255,255,0.03)}
    body{font-family:Inter,Segoe UI,Roboto,Arial,sans-serif;background:linear-gradient(180deg,#071025 0%,#0b1220 100%);color:#e6eef8;margin:0;padding:32px}
    .container{max-width:900px;margin:0 auto}
    header{display:flex;align-items:center;gap:16px}
    header h1{margin:0;font-size:28px}
    header p{margin:0;color:var(--muted)}
    .card{background:var(--card);padding:20px;border-radius:12px;box-shadow:0 6px 18px rgba(2,6,23,0.6);margin-top:20px}
    h2{color:#fff;margin-top:0}
    ul{line-height:1.6}
    pre{background:var(--glass);padding:12px;border-radius:8px;overflow:auto;color:#dbeafe}
    code{font-family:SFMono-Regular,Menlo,Monaco,Consolas,"Liberation Mono","Courier New",monospace}
    .badge{display:inline-block;background:linear-gradient(90deg,var(--accent),#7dd3fc);padding:6px 10px;border-radius:999px;color:#022; font-weight:600}
    .grid{display:grid;grid-template-columns:1fr 240px;gap:20px}
    .small{font-size:13px;color:var(--muted)}
    footer{margin-top:20px;color:var(--muted);font-size:13px}
    @media(max-width:880px){.grid{grid-template-columns:1fr}}
  </style>
</head>
<body>
  <div class="container">
    <header>
      <div>
        <h1>Unit 1 — C++ Programming Fundamentals</h1>
        <p class="small">A clean, GitHub-ready HTML README for Unit 1 (copy to <code>README.md</code> or host as HTML)</p>
      </div>
      <div style="margin-left:auto;text-align:right">
        <span class="badge">Unit 1</span>
      </div>
    </header>

    <div class="grid">
      <main class="card">
        <h2>Overview</h2>
        <p>This unit introduces the basics of programming and the structure and syntax of C++ programs. It focuses on writing, compiling, and running simple C++ programs, and understanding variables, data types, input/output and basic operators.</p>

        <h2>Topics Covered</h2>
        <ul>
          <li><strong>What is Programming?</strong> — Definition, purpose, and examples.</li>
          <li><strong>Introduction to C++</strong> — Brief history and common uses (systems, games, competitive programming).</li>
          <li><strong>Structure of a C++ Program</strong> — includes <code>#include</code>, <code>int main()</code>, braces, and <code>return</code>.</li>
          <li><strong>Input / Output</strong> — <code>cout</code>, <code>cin</code>, and stream operators <code>&lt;&lt;</code>/<code>&gt;&gt;</code>.</li>
          <li><strong>Variables & Data Types</strong> — <code>int</code>, <code>float</code>, <code>double</code>, <code>char</code>, <code>bool</code>, <code>string</code>, and naming rules.</li>
          <li><strong>Basic Operators</strong> — arithmetic, assignment, increment/decrement.</li>
          <li><strong>Comments</strong> — <code>//</code> and <code>/* ... */</code>.</li>
        </ul>

        <h2>Folder Structure (recommended)</h2>
        <pre><code>Unit-01/
│── README.md
│── intro.cpp
│── variables.cpp
│── input_output.cpp
│── operators.cpp
└── notes.pdf
        </code></pre>

        <h2>How to Run</h2>
        <p class="small">Run the examples from terminal using <code>g++</code> or use an IDE like VS Code.</p>
        <pre><code># Compile
g++ filename.cpp -o program
# Run (Linux / macOS)
./program
# Run (Windows PowerShell)
./program.exe
        </code></pre>

        <h2>Learning Outcomes</h2>
        <ul>
          <li>Write and run a basic C++ program.</li>
          <li>Understand C++ program structure.</li>
          <li>Use input and output streams.</li>
          <li>Declare variables and use basic operators.</li>
        </ul>

        <h2>Why I'm Uploading This Series</h2>
        <p>Uploading all 10 units day-by-day creates a public learning path, a portfolio for internships, and a study resource for other students.</p>

        <h2>Contact</h2>
        <p class="small">LinkedIn: <em>add-your-link-here</em><br>GitHub: <em>your-username</em></p>

        <footer>
          <p class="small">Bhai, agar aap chaho toh main is HTML ko aur Urdu/roman-urdu version me bhi bana dun. Batao kaunsa style pasand hai — simple ya fancy?</p>
        </footer>
      </main>

      <aside class="card">
        <h3>Quick Notes</h3>
        <p class="small">Tips for committing:</p>
        <ul class="small">
          <li>Commit each day's unit as a separate folder: <code>Unit-02/</code>, <code>Unit-03/</code>, ...</li>
          <li>Use meaningful commit messages: <code>feat(unit-01): add intro and examples</code></li>
          <li>Add a top-level <code>CONTRIBUTING.md</code> later if others will help.</li>
        </ul>

        <h3>Sample Commit Command</h3>
        <pre><code>git add Unit-01
git commit -m "chore(unit-01): add unit 1 files"
git push origin main
        </code></pre>

        <h3>Extra</h3>
        <p class="small">Want me to generate a <code>notes.pdf</code> or sample .cpp files? I can create them for you.</p>
      </aside>
    </div>
  </div>
</body>
</html>

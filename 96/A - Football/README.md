<h2><a href="https://codeforces.com/contest/96/problem/A" target="_blank" rel="noopener noreferrer">96A — Football</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | GNU C11 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 96A](https://codeforces.com/contest/96/problem/A) |

## Topics
`implementation` `strings`

---

## Problem Statement

<div class="header"><div class="title">A. Football</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" style="font-weight: bold"><div class="property-title">input</div>stdin</div><div class="output-file output-standard" style="font-weight: bold"><div class="property-title">output</div>stdout</div></div><div><p>Petya loves football very much. One day, as he was watching a football match, he was writing the players' current positions on a piece of paper. To simplify the situation he depicted it as a string consisting of zeroes and ones. A zero corresponds to players of one team; a one corresponds to players of another team. If there are at least <span class="tex-span">7</span> players of some team standing one after another, then the situation is considered dangerous. For example, the situation <span class="tex-span">00100110111111101</span> is dangerous and <span class="tex-span">11110111011101</span> is not. You are given the current situation. Determine whether it is dangerous or not.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first input line contains a non-empty string consisting of characters "0" and "1", which represents players. The length of the string does not exceed <span class="tex-span">100</span> characters. There's at least one player from each team present on the field.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print "YES" if the situation is dangerous. Otherwise, print "NO".</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004769676564826121" id="id0043504420920846043" class="input-output-copier">Copy</div></div><pre id="id004769676564826121">001001<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0014100301696015638" id="id0030874695870179447" class="input-output-copier">Copy</div></div><pre id="id0014100301696015638">NO<br></pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0020385741502174393" id="id001263403276890337" class="input-output-copier">Copy</div></div><pre id="id0020385741502174393">1000000001<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007282734028946847" id="id006803722870360562" class="input-output-copier">Copy</div></div><pre id="id007282734028946847">YES<br></pre></div></div></div>
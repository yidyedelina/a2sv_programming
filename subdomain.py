class Solution:
    def subdomainVisits(self, cpdomains: List[str]) -> List[str]:
        dict = {}
        for dom in cpdomains:
            sp = dom.split(" ")
            nVisited = int(sp[0])
            dict[sp[1]] = dict.get(sp[1], 0) + nVisited
            d2Id = sp[1].find(".")
            if d2Id != -1:
                d2 = sp[1][d2Id + 1:]
                dict[d2] = dict.get(d2, 0) + nVisited
            d3Id = sp[1].find(".",d2Id + 1)
            if d3Id != -1:
                d3 = sp[1][d3Id + 1:]
                dict[d3] = dict.get(d3, 0) + nVisited
        li = []
        for key in dict:
            li.append(str(dict[key]) + " " + key)
        return li

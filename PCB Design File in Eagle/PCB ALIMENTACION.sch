<?xml version="1.0" encoding="utf-8"?>
<!DOCTYPE eagle SYSTEM "eagle.dtd">
<eagle version="7.3.0">
<drawing>
<settings>
<setting alwaysvectorfont="no"/>
<setting verticaltext="up"/>
</settings>
<grid distance="0.1" unitdist="inch" unit="inch" style="lines" multiple="1" display="no" altdistance="0.01" altunitdist="inch" altunit="inch"/>
<layers>
<layer number="1" name="Top" color="4" fill="1" visible="no" active="no"/>
<layer number="2" name="Route2" color="1" fill="3" visible="no" active="no"/>
<layer number="3" name="Route3" color="4" fill="3" visible="no" active="no"/>
<layer number="4" name="Route4" color="1" fill="4" visible="no" active="no"/>
<layer number="5" name="Route5" color="4" fill="4" visible="no" active="no"/>
<layer number="6" name="Route6" color="1" fill="8" visible="no" active="no"/>
<layer number="7" name="Route7" color="4" fill="8" visible="no" active="no"/>
<layer number="8" name="Route8" color="1" fill="2" visible="no" active="no"/>
<layer number="9" name="Route9" color="4" fill="2" visible="no" active="no"/>
<layer number="10" name="Route10" color="1" fill="7" visible="no" active="no"/>
<layer number="11" name="Route11" color="4" fill="7" visible="no" active="no"/>
<layer number="12" name="Route12" color="1" fill="5" visible="no" active="no"/>
<layer number="13" name="Route13" color="4" fill="5" visible="no" active="no"/>
<layer number="14" name="Route14" color="1" fill="6" visible="no" active="no"/>
<layer number="15" name="Route15" color="4" fill="6" visible="no" active="no"/>
<layer number="16" name="Bottom" color="1" fill="1" visible="no" active="no"/>
<layer number="17" name="Pads" color="2" fill="1" visible="no" active="no"/>
<layer number="18" name="Vias" color="2" fill="1" visible="no" active="no"/>
<layer number="19" name="Unrouted" color="6" fill="1" visible="no" active="no"/>
<layer number="20" name="Dimension" color="15" fill="1" visible="no" active="no"/>
<layer number="21" name="tPlace" color="7" fill="1" visible="no" active="no"/>
<layer number="22" name="bPlace" color="7" fill="1" visible="no" active="no"/>
<layer number="23" name="tOrigins" color="15" fill="1" visible="no" active="no"/>
<layer number="24" name="bOrigins" color="15" fill="1" visible="no" active="no"/>
<layer number="25" name="tNames" color="7" fill="1" visible="no" active="no"/>
<layer number="26" name="bNames" color="7" fill="1" visible="no" active="no"/>
<layer number="27" name="tValues" color="7" fill="1" visible="no" active="no"/>
<layer number="28" name="bValues" color="7" fill="1" visible="no" active="no"/>
<layer number="29" name="tStop" color="7" fill="3" visible="no" active="no"/>
<layer number="30" name="bStop" color="7" fill="6" visible="no" active="no"/>
<layer number="31" name="tCream" color="7" fill="4" visible="no" active="no"/>
<layer number="32" name="bCream" color="7" fill="5" visible="no" active="no"/>
<layer number="33" name="tFinish" color="6" fill="3" visible="no" active="no"/>
<layer number="34" name="bFinish" color="6" fill="6" visible="no" active="no"/>
<layer number="35" name="tGlue" color="7" fill="4" visible="no" active="no"/>
<layer number="36" name="bGlue" color="7" fill="5" visible="no" active="no"/>
<layer number="37" name="tTest" color="7" fill="1" visible="no" active="no"/>
<layer number="38" name="bTest" color="7" fill="1" visible="no" active="no"/>
<layer number="39" name="tKeepout" color="4" fill="11" visible="no" active="no"/>
<layer number="40" name="bKeepout" color="1" fill="11" visible="no" active="no"/>
<layer number="41" name="tRestrict" color="4" fill="10" visible="no" active="no"/>
<layer number="42" name="bRestrict" color="1" fill="10" visible="no" active="no"/>
<layer number="43" name="vRestrict" color="2" fill="10" visible="no" active="no"/>
<layer number="44" name="Drills" color="7" fill="1" visible="no" active="no"/>
<layer number="45" name="Holes" color="7" fill="1" visible="no" active="no"/>
<layer number="46" name="Milling" color="3" fill="1" visible="no" active="no"/>
<layer number="47" name="Measures" color="7" fill="1" visible="no" active="no"/>
<layer number="48" name="Document" color="7" fill="1" visible="no" active="no"/>
<layer number="49" name="Reference" color="7" fill="1" visible="no" active="no"/>
<layer number="51" name="tDocu" color="7" fill="1" visible="no" active="no"/>
<layer number="52" name="bDocu" color="7" fill="1" visible="no" active="no"/>
<layer number="90" name="Modules" color="5" fill="1" visible="yes" active="yes"/>
<layer number="91" name="Nets" color="2" fill="1" visible="yes" active="yes"/>
<layer number="92" name="Busses" color="1" fill="1" visible="yes" active="yes"/>
<layer number="93" name="Pins" color="2" fill="1" visible="no" active="yes"/>
<layer number="94" name="Symbols" color="4" fill="1" visible="yes" active="yes"/>
<layer number="95" name="Names" color="7" fill="1" visible="yes" active="yes"/>
<layer number="96" name="Values" color="7" fill="1" visible="yes" active="yes"/>
<layer number="97" name="Info" color="7" fill="1" visible="yes" active="yes"/>
<layer number="98" name="Guide" color="6" fill="1" visible="yes" active="yes"/>
</layers>
<schematic xreflabel="%F%N/%S.%C%R" xrefpart="/%S.%C%R">
<libraries>
<library name="con-lsta">
<description>&lt;b&gt;Female Headers etc.&lt;/b&gt;&lt;p&gt;
Naming:&lt;p&gt;
FE = female&lt;p&gt;
# contacts - # rows&lt;p&gt;
W = angled&lt;p&gt;
&lt;author&gt;Created by librarian@cadsoft.de&lt;/author&gt;</description>
<packages>
<package name="JBK20">
<description>&lt;b&gt;PIN HEADER&lt;/b&gt;</description>
<wire x1="-25.019" y1="1.016" x2="25.019" y2="1.016" width="0.1524" layer="21"/>
<wire x1="25.4" y1="-0.635" x2="25.4" y2="0.635" width="0.1524" layer="21"/>
<wire x1="25.019" y1="-1.016" x2="25.4" y2="-0.635" width="0.1524" layer="21"/>
<wire x1="25.4" y1="0.635" x2="25.019" y2="1.016" width="0.1524" layer="21"/>
<wire x1="-25.019" y1="-1.016" x2="-25.4" y2="-0.635" width="0.1524" layer="21"/>
<wire x1="-25.4" y1="-0.635" x2="-25.4" y2="0.635" width="0.1524" layer="21"/>
<wire x1="-25.4" y1="0.635" x2="-25.019" y2="1.016" width="0.1524" layer="21"/>
<wire x1="-25.019" y1="-1.016" x2="25.019" y2="-1.016" width="0.1524" layer="21"/>
<circle x="-24.13" y="0" radius="0.127" width="0.4064" layer="51"/>
<circle x="-21.59" y="0" radius="0.127" width="0.4064" layer="51"/>
<circle x="-19.05" y="0" radius="0.127" width="0.4064" layer="51"/>
<circle x="-16.51" y="0" radius="0.127" width="0.4064" layer="51"/>
<circle x="-13.97" y="0" radius="0.127" width="0.4064" layer="51"/>
<circle x="-11.43" y="0" radius="0.127" width="0.4064" layer="51"/>
<circle x="-8.89" y="0" radius="0.127" width="0.4064" layer="51"/>
<circle x="-6.35" y="0" radius="0.127" width="0.4064" layer="51"/>
<circle x="-3.81" y="0" radius="0.127" width="0.4064" layer="51"/>
<circle x="-1.27" y="0" radius="0.127" width="0.4064" layer="51"/>
<circle x="1.27" y="0" radius="0.127" width="0.4064" layer="51"/>
<circle x="3.81" y="0" radius="0.127" width="0.4064" layer="51"/>
<circle x="6.35" y="0" radius="0.127" width="0.4064" layer="51"/>
<circle x="8.89" y="0" radius="0.127" width="0.4064" layer="51"/>
<circle x="11.43" y="0" radius="0.127" width="0.4064" layer="51"/>
<circle x="13.97" y="0" radius="0.127" width="0.4064" layer="51"/>
<circle x="16.51" y="0" radius="0.127" width="0.4064" layer="51"/>
<circle x="19.05" y="0" radius="0.127" width="0.4064" layer="51"/>
<circle x="21.59" y="0" radius="0.127" width="0.4064" layer="51"/>
<circle x="24.13" y="0" radius="0.127" width="0.4064" layer="51"/>
<pad name="1" x="-24.13" y="0" drill="0.8128" shape="long" rot="R90"/>
<pad name="2" x="-21.59" y="0" drill="0.8128" shape="long" rot="R90"/>
<pad name="3" x="-19.05" y="0" drill="0.8128" shape="long" rot="R90"/>
<pad name="4" x="-16.51" y="0" drill="0.8128" shape="long" rot="R90"/>
<pad name="5" x="-13.97" y="0" drill="0.8128" shape="long" rot="R90"/>
<pad name="6" x="-11.43" y="0" drill="0.8128" shape="long" rot="R90"/>
<pad name="7" x="-8.89" y="0" drill="0.8128" shape="long" rot="R90"/>
<pad name="8" x="-6.35" y="0" drill="0.8128" shape="long" rot="R90"/>
<pad name="9" x="-3.81" y="0" drill="0.8128" shape="long" rot="R90"/>
<pad name="10" x="-1.27" y="0" drill="0.8128" shape="long" rot="R90"/>
<pad name="11" x="1.27" y="0" drill="0.8128" shape="long" rot="R90"/>
<pad name="12" x="3.81" y="0" drill="0.8128" shape="long" rot="R90"/>
<pad name="13" x="6.35" y="0" drill="0.8128" shape="long" rot="R90"/>
<pad name="14" x="8.89" y="0" drill="0.8128" shape="long" rot="R90"/>
<pad name="15" x="11.43" y="0" drill="0.8128" shape="long" rot="R90"/>
<pad name="16" x="13.97" y="0" drill="0.8128" shape="long" rot="R90"/>
<pad name="17" x="16.51" y="0" drill="0.8128" shape="long" rot="R90"/>
<pad name="18" x="19.05" y="0" drill="0.8128" shape="long" rot="R90"/>
<pad name="19" x="21.59" y="0" drill="0.8128" shape="long" rot="R90"/>
<pad name="20" x="24.13" y="0" drill="0.8128" shape="long" rot="R90"/>
<text x="-25.4" y="1.397" size="1.27" layer="25" ratio="10">&gt;NAME</text>
<text x="-24.511" y="-2.667" size="1.27" layer="21" ratio="10">1</text>
<text x="23.114" y="-2.667" size="1.27" layer="21" ratio="10">20</text>
<text x="-2.159" y="-2.667" size="1.27" layer="21" ratio="10">10</text>
<text x="-15.24" y="1.397" size="1.27" layer="27" ratio="10">&gt;VALUE</text>
</package>
</packages>
<symbols>
<symbol name="J20-1">
<wire x1="3.81" y1="-27.94" x2="-1.27" y2="-27.94" width="0.4064" layer="94"/>
<wire x1="-1.27" y1="25.4" x2="-1.27" y2="-27.94" width="0.4064" layer="94"/>
<wire x1="-1.27" y1="25.4" x2="3.81" y2="25.4" width="0.4064" layer="94"/>
<wire x1="3.81" y1="-27.94" x2="3.81" y2="25.4" width="0.4064" layer="94"/>
<circle x="1.905" y="-25.4" radius="0.635" width="0.254" layer="94"/>
<circle x="1.905" y="-22.86" radius="0.635" width="0.254" layer="94"/>
<circle x="1.905" y="-20.32" radius="0.635" width="0.254" layer="94"/>
<circle x="1.905" y="-17.78" radius="0.635" width="0.254" layer="94"/>
<circle x="1.905" y="-15.24" radius="0.635" width="0.254" layer="94"/>
<circle x="1.905" y="-12.7" radius="0.635" width="0.254" layer="94"/>
<circle x="1.905" y="-10.16" radius="0.635" width="0.254" layer="94"/>
<circle x="1.905" y="-7.62" radius="0.635" width="0.254" layer="94"/>
<circle x="1.905" y="-5.08" radius="0.635" width="0.254" layer="94"/>
<circle x="1.905" y="-2.54" radius="0.635" width="0.254" layer="94"/>
<circle x="1.905" y="0" radius="0.635" width="0.254" layer="94"/>
<circle x="1.905" y="2.54" radius="0.635" width="0.254" layer="94"/>
<circle x="1.905" y="5.08" radius="0.635" width="0.254" layer="94"/>
<circle x="1.905" y="7.62" radius="0.635" width="0.254" layer="94"/>
<circle x="1.905" y="10.16" radius="0.635" width="0.254" layer="94"/>
<circle x="1.905" y="12.7" radius="0.635" width="0.254" layer="94"/>
<circle x="1.905" y="15.24" radius="0.635" width="0.254" layer="94"/>
<circle x="1.905" y="17.78" radius="0.635" width="0.254" layer="94"/>
<circle x="1.905" y="20.32" radius="0.635" width="0.254" layer="94"/>
<circle x="1.905" y="22.86" radius="0.635" width="0.254" layer="94"/>
<text x="-1.27" y="-30.48" size="1.778" layer="96">&gt;VALUE</text>
<text x="-1.27" y="26.162" size="1.778" layer="95">&gt;NAME</text>
<pin name="1" x="7.62" y="-25.4" visible="pad" length="middle" direction="pas" swaplevel="1" rot="R180"/>
<pin name="2" x="7.62" y="-22.86" visible="pad" length="middle" direction="pas" swaplevel="1" rot="R180"/>
<pin name="3" x="7.62" y="-20.32" visible="pad" length="middle" direction="pas" swaplevel="1" rot="R180"/>
<pin name="4" x="7.62" y="-17.78" visible="pad" length="middle" direction="pas" swaplevel="1" rot="R180"/>
<pin name="5" x="7.62" y="-15.24" visible="pad" length="middle" direction="pas" swaplevel="1" rot="R180"/>
<pin name="6" x="7.62" y="-12.7" visible="pad" length="middle" direction="pas" swaplevel="1" rot="R180"/>
<pin name="7" x="7.62" y="-10.16" visible="pad" length="middle" direction="pas" swaplevel="1" rot="R180"/>
<pin name="8" x="7.62" y="-7.62" visible="pad" length="middle" direction="pas" swaplevel="1" rot="R180"/>
<pin name="9" x="7.62" y="-5.08" visible="pad" length="middle" direction="pas" swaplevel="1" rot="R180"/>
<pin name="10" x="7.62" y="-2.54" visible="pad" length="middle" direction="pas" swaplevel="1" rot="R180"/>
<pin name="11" x="7.62" y="0" visible="pad" length="middle" direction="pas" swaplevel="1" rot="R180"/>
<pin name="12" x="7.62" y="2.54" visible="pad" length="middle" direction="pas" swaplevel="1" rot="R180"/>
<pin name="13" x="7.62" y="5.08" visible="pad" length="middle" direction="pas" swaplevel="1" rot="R180"/>
<pin name="14" x="7.62" y="7.62" visible="pad" length="middle" direction="pas" swaplevel="1" rot="R180"/>
<pin name="15" x="7.62" y="10.16" visible="pad" length="middle" direction="pas" swaplevel="1" rot="R180"/>
<pin name="16" x="7.62" y="12.7" visible="pad" length="middle" direction="pas" swaplevel="1" rot="R180"/>
<pin name="17" x="7.62" y="15.24" visible="pad" length="middle" direction="pas" swaplevel="1" rot="R180"/>
<pin name="18" x="7.62" y="17.78" visible="pad" length="middle" direction="pas" swaplevel="1" rot="R180"/>
<pin name="19" x="7.62" y="20.32" visible="pad" length="middle" direction="pas" swaplevel="1" rot="R180"/>
<pin name="20" x="7.62" y="22.86" visible="pad" length="middle" direction="pas" swaplevel="1" rot="R180"/>
</symbol>
</symbols>
<devicesets>
<deviceset name="JBK20" prefix="J" uservalue="yes">
<description>&lt;b&gt;PIN HEADER&lt;/b&gt;</description>
<gates>
<gate name="1" symbol="J20-1" x="0" y="0"/>
</gates>
<devices>
<device name="" package="JBK20">
<connects>
<connect gate="1" pin="1" pad="1"/>
<connect gate="1" pin="10" pad="10"/>
<connect gate="1" pin="11" pad="11"/>
<connect gate="1" pin="12" pad="12"/>
<connect gate="1" pin="13" pad="13"/>
<connect gate="1" pin="14" pad="14"/>
<connect gate="1" pin="15" pad="15"/>
<connect gate="1" pin="16" pad="16"/>
<connect gate="1" pin="17" pad="17"/>
<connect gate="1" pin="18" pad="18"/>
<connect gate="1" pin="19" pad="19"/>
<connect gate="1" pin="2" pad="2"/>
<connect gate="1" pin="20" pad="20"/>
<connect gate="1" pin="3" pad="3"/>
<connect gate="1" pin="4" pad="4"/>
<connect gate="1" pin="5" pad="5"/>
<connect gate="1" pin="6" pad="6"/>
<connect gate="1" pin="7" pad="7"/>
<connect gate="1" pin="8" pad="8"/>
<connect gate="1" pin="9" pad="9"/>
</connects>
<technologies>
<technology name="">
<attribute name="MF" value="" constant="no"/>
<attribute name="MPN" value="" constant="no"/>
<attribute name="OC_FARNELL" value="unknown" constant="no"/>
<attribute name="OC_NEWARK" value="unknown" constant="no"/>
</technology>
</technologies>
</device>
</devices>
</deviceset>
</devicesets>
</library>
</libraries>
<attributes>
</attributes>
<variantdefs>
</variantdefs>
<classes>
<class number="0" name="default" width="0" drill="0">
</class>
</classes>
<parts>
<part name="+" library="con-lsta" deviceset="JBK20" device=""/>
<part name="-" library="con-lsta" deviceset="JBK20" device=""/>
</parts>
<sheets>
<sheet>
<plain>
</plain>
<instances>
<instance part="+" gate="1" x="10.16" y="53.34"/>
<instance part="-" gate="1" x="33.02" y="50.8" rot="R180"/>
</instances>
<busses>
</busses>
<nets>
<net name="N$1" class="0">
<segment>
<pinref part="+" gate="1" pin="1"/>
<pinref part="+" gate="1" pin="20"/>
<wire x1="17.78" y1="27.94" x2="17.78" y2="76.2" width="0.1524" layer="91"/>
</segment>
</net>
<net name="N$2" class="0">
<segment>
<pinref part="-" gate="1" pin="1"/>
<pinref part="-" gate="1" pin="20"/>
<wire x1="25.4" y1="76.2" x2="25.4" y2="27.94" width="0.1524" layer="91"/>
</segment>
</net>
</nets>
</sheet>
</sheets>
</schematic>
</drawing>
</eagle>

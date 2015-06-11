<GameProjectFile>
  <PropertyGroup Type="Scene" Name="RPSGameScene" ID="f79c98d9-8dd8-4b3d-a0cd-3c18cdd21cf1" Version="2.2.9.0" />
  <Content ctype="GameProjectContent">
    <Content>
      <Animation Duration="0" Speed="1.0000" />
      <ObjectData Name="Scene" Tag="11" ctype="GameNodeObjectData">
        <Size X="568.0000" Y="320.0000" />
        <Children>
          <AbstractNodeData Name="mainPanel" ActionTag="-57760520" Tag="12" IconVisible="False" HorizontalEdge="BothEdge" VerticalEdge="BothEdge" TouchEnable="True" StretchWidthEnable="True" StretchHeightEnable="True" ComboBoxIndex="1" ColorAngle="90.0000" ctype="PanelObjectData">
            <Size X="568.0000" Y="320.0000" />
            <Children>
              <AbstractNodeData Name="winText" ActionTag="-793704252" Tag="13" IconVisible="False" PositionPercentXEnabled="True" VerticalEdge="TopEdge" LeftMargin="234.0000" RightMargin="234.0000" TopMargin="20.0000" BottomMargin="275.0000" IsCustomSize="True" FontSize="18" LabelText="0 win&#xA;" HorizontalAlignmentType="HT_Center" VerticalAlignmentType="VT_Center" OutlineSize="1" ShadowOffsetX="2" ShadowOffsetY="-2" ctype="TextObjectData">
                <Size X="100.0000" Y="25.0000" />
                <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
                <Position X="284.0000" Y="287.5000" />
                <Scale ScaleX="1.0000" ScaleY="1.0000" />
                <CColor A="255" R="255" G="0" B="0" />
                <PrePosition X="0.5000" Y="0.8984" />
                <PreSize X="0.1761" Y="0.0781" />
                <FontResource Type="Normal" Path="comic-sans.ttf" Plist="" />
                <OutlineColor A="255" R="255" G="0" B="0" />
                <ShadowColor A="255" R="110" G="110" B="110" />
              </AbstractNodeData>
              <AbstractNodeData Name="charPanel" ActionTag="1343801595" Tag="14" IconVisible="False" PositionPercentXEnabled="True" VerticalEdge="TopEdge" LeftMargin="84.0000" RightMargin="84.0144" TopMargin="40.0000" BottomMargin="160.0000" TouchEnable="True" StretchWidthEnable="True" BackColorAlpha="0" ComboBoxIndex="1" ColorAngle="90.0000" ctype="PanelObjectData">
                <Size X="399.9856" Y="120.0000" />
                <Children>
                  <AbstractNodeData Name="mySprite" ActionTag="-649280756" Tag="15" IconVisible="False" HorizontalEdge="LeftEdge" VerticalEdge="BottomEdge" LeftMargin="9.9997" RightMargin="288.9859" TopMargin="-59.0000" BottomMargin="8.0000" ctype="SpriteObjectData">
                    <Size X="101.0000" Y="171.0000" />
                    <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
                    <Position X="60.4997" Y="93.5000" />
                    <Scale ScaleX="1.0000" ScaleY="1.0000" />
                    <CColor A="255" R="255" G="255" B="255" />
                    <PrePosition X="0.1513" Y="0.7792" />
                    <PreSize />
                    <FileData Type="Normal" Path="girl.png" Plist="" />
                    <BlendFunc Src="1" Dst="771" />
                  </AbstractNodeData>
                  <AbstractNodeData Name="comSprite" ActionTag="769872058" Tag="16" IconVisible="False" HorizontalEdge="RightEdge" VerticalEdge="BottomEdge" LeftMargin="288.9856" RightMargin="10.0000" TopMargin="-59.0000" BottomMargin="8.0000" ctype="SpriteObjectData">
                    <Size X="101.0000" Y="171.0000" />
                    <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
                    <Position X="339.4856" Y="93.5000" />
                    <Scale ScaleX="1.0000" ScaleY="1.0000" />
                    <CColor A="255" R="255" G="255" B="255" />
                    <PrePosition X="0.8487" Y="0.7792" />
                    <PreSize />
                    <FileData Type="Normal" Path="boy.png" Plist="" />
                    <BlendFunc Src="1" Dst="771" />
                  </AbstractNodeData>
                  <AbstractNodeData Name="myNameText" ActionTag="-1125359455" Tag="17" IconVisible="False" HorizontalEdge="LeftEdge" VerticalEdge="BottomEdge" LeftMargin="45.0000" RightMargin="324.9856" TopMargin="87.0000" BottomMargin="5.0000" FontSize="20" LabelText="ME&#xA;" OutlineSize="1" ShadowOffsetX="2" ShadowOffsetY="-2" ctype="TextObjectData">
                    <Size X="30.0000" Y="28.0000" />
                    <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
                    <Position X="60.0000" Y="19.0000" />
                    <Scale ScaleX="1.0000" ScaleY="1.0000" />
                    <CColor A="255" R="0" G="0" B="0" />
                    <PrePosition X="0.1500" Y="0.1583" />
                    <PreSize />
                    <FontResource Type="Normal" Path="comic-sans.ttf" Plist="" />
                    <OutlineColor A="255" R="255" G="0" B="0" />
                    <ShadowColor A="255" R="110" G="110" B="110" />
                  </AbstractNodeData>
                  <AbstractNodeData Name="COMNameText" ActionTag="2099591460" Tag="18" IconVisible="False" HorizontalEdge="RightEdge" VerticalEdge="BottomEdge" LeftMargin="308.9856" RightMargin="45.0000" TopMargin="87.0000" BottomMargin="5.0000" FontSize="20" LabelText="COM&#xA;" OutlineSize="1" ShadowOffsetX="2" ShadowOffsetY="-2" ctype="TextObjectData">
                    <Size X="46.0000" Y="28.0000" />
                    <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
                    <Position X="331.9856" Y="19.0000" />
                    <Scale ScaleX="1.0000" ScaleY="1.0000" />
                    <CColor A="255" R="0" G="0" B="0" />
                    <PrePosition X="0.8300" Y="0.1583" />
                    <PreSize />
                    <FontResource Type="Normal" Path="comic-sans.ttf" Plist="" />
                    <OutlineColor A="255" R="255" G="0" B="0" />
                    <ShadowColor A="255" R="110" G="110" B="110" />
                  </AbstractNodeData>
                  <AbstractNodeData Name="myHandSprite" ActionTag="-1553153084" Tag="21" IconVisible="False" HorizontalEdge="LeftEdge" VerticalEdge="TopEdge" LeftMargin="130.0000" RightMargin="209.9856" TopMargin="25.0000" BottomMargin="35.0000" ctype="SpriteObjectData">
                    <Size X="60.0000" Y="60.0000" />
                    <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
                    <Position X="160.0000" Y="65.0000" />
                    <Scale ScaleX="1.0000" ScaleY="1.0000" />
                    <CColor A="255" R="255" G="255" B="255" />
                    <PrePosition X="0.4000" Y="0.5417" />
                    <PreSize />
                    <FileData Type="Normal" Path="rps_scissors.png" Plist="" />
                    <BlendFunc Src="1" Dst="771" />
                  </AbstractNodeData>
                  <AbstractNodeData Name="comHandSprite" ActionTag="-2060745209" Tag="22" IconVisible="False" HorizontalEdge="RightEdge" VerticalEdge="TopEdge" LeftMargin="209.9856" RightMargin="130.0000" TopMargin="25.0000" BottomMargin="35.0000" ctype="SpriteObjectData">
                    <Size X="60.0000" Y="60.0000" />
                    <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
                    <Position X="239.9856" Y="65.0000" />
                    <Scale ScaleX="1.0000" ScaleY="1.0000" />
                    <CColor A="255" R="255" G="255" B="255" />
                    <PrePosition X="0.6000" Y="0.5417" />
                    <PreSize />
                    <FileData Type="Normal" Path="rps_rock.png" Plist="" />
                    <BlendFunc Src="1" Dst="771" />
                  </AbstractNodeData>
                </Children>
                <AnchorPoint ScaleX="0.5000" ScaleY="1.0000" />
                <Position X="283.9928" Y="280.0000" />
                <Scale ScaleX="1.0000" ScaleY="1.0000" />
                <CColor A="255" R="255" G="255" B="255" />
                <PrePosition X="0.5000" Y="0.8750" />
                <PreSize X="0.7042" Y="0.3750" />
                <SingleColor A="255" R="150" G="200" B="255" />
                <FirstColor A="255" R="150" G="200" B="255" />
                <EndColor A="255" R="255" G="255" B="255" />
                <ColorVector ScaleY="1.0000" />
              </AbstractNodeData>
              <AbstractNodeData Name="dialogPanel" ActionTag="1427781162" Tag="24" IconVisible="False" PositionPercentXEnabled="True" VerticalEdge="BottomEdge" LeftMargin="84.0000" RightMargin="84.0000" TopMargin="180.0000" BottomMargin="20.0000" TouchEnable="True" BackColorAlpha="0" ComboBoxIndex="1" ColorAngle="90.0000" ctype="PanelObjectData">
                <Size X="400.0000" Y="120.0000" />
                <AnchorPoint ScaleX="0.5000" />
                <Position X="284.0000" Y="20.0000" />
                <Scale ScaleX="1.0000" ScaleY="1.0000" />
                <CColor A="255" R="255" G="255" B="255" />
                <PrePosition X="0.5000" Y="0.0625" />
                <PreSize X="0.7042" Y="0.3750" />
                <SingleColor A="255" R="150" G="200" B="255" />
                <FirstColor A="255" R="150" G="200" B="255" />
                <EndColor A="255" R="255" G="255" B="255" />
                <ColorVector ScaleY="1.0000" />
              </AbstractNodeData>
            </Children>
            <AnchorPoint />
            <Position />
            <Scale ScaleX="1.0000" ScaleY="1.0000" />
            <CColor A="255" R="255" G="255" B="255" />
            <PrePosition />
            <PreSize X="1.0000" Y="1.0000" />
            <SingleColor A="255" R="221" G="234" B="118" />
            <FirstColor A="255" R="150" G="200" B="255" />
            <EndColor A="255" R="255" G="255" B="255" />
            <ColorVector ScaleY="1.0000" />
          </AbstractNodeData>
        </Children>
      </ObjectData>
    </Content>
  </Content>
</GameProjectFile>
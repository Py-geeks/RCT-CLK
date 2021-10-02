import React from "react";

const Footer = () => {

    const footcss = {
        backgroundcolor: "#000000",
        padding: "10px",
    }
  return (
    <div>
      <section style={ footcss }>
        <div style={{ textAlign: "center",padding: "10px",position: "relative",  background: "#000000", bottom: "0px"  }}>
          <span style={{ color: "White" }}>Semicolons</span>
        </div>
      </section>
    </div>
  );
};

export default Footer;

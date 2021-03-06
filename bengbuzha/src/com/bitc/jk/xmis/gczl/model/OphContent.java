package com.bitc.jk.xmis.gczl.model;

import java.math.BigDecimal;
import java.util.Date;

public class OphContent {
	private int tab_seed;
	private String unit_code;
	private Date measure_date;
	private String river_code;
	private String place_code;
	private BigDecimal oph_content_qty;
	private String memo;
	private int measure_man;
	public int getTab_seed() {
		return tab_seed;
	}
	public void setTab_seed(int tab_seed) {
		this.tab_seed = tab_seed;
	}
	public String getUnit_code() {
		return unit_code;
	}
	public void setUnit_code(String unit_code) {
		this.unit_code = unit_code;
	}
	public Date getMeasure_date() {
		return measure_date;
	}
	public void setMeasure_date(Date measure_date) {
		this.measure_date = measure_date;
	}
	public String getRiver_code() {
		return river_code;
	}
	public void setRiver_code(String river_code) {
		this.river_code = river_code;
	}
	public String getPlace_code() {
		return place_code;
	}
	public void setPlace_code(String place_code) {
		this.place_code = place_code;
	}
	public BigDecimal getOph_content_qty() {
		return oph_content_qty;
	}
	public void setOph_content_qty(BigDecimal oph_content_qty) {
		this.oph_content_qty = oph_content_qty;
	}
	public String getMemo() {
		return memo;
	}
	public void setMemo(String memo) {
		this.memo = memo;
	}
	public int getMeasure_man() {
		return measure_man;
	}
	public void setMeasure_man(int measure_man) {
		this.measure_man = measure_man;
	}
	
}

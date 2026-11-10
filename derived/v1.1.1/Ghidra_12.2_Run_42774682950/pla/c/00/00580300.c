/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00580300; name: FUN_00580300
 */


void FUN_00580300(undefined8 *param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  byte local_58;
  undefined8 local_57;
  undefined6 uStack_4f;
  undefined1 uStack_49;
  undefined1 uStack_48;
  undefined6 uStack_47;
  undefined1 uStack_41;
  long local_40;
  long lStack_38;
  undefined8 local_28;
  
  local_57 = *(undefined8 *)PTR_DAT_04374e30;
  uVar3 = *(undefined8 *)(PTR_DAT_04374e30 + 0xe);
  local_58 = 0x2c;
  uStack_4f = (undefined6)*(undefined8 *)(PTR_DAT_04374e30 + 8);
  uStack_49 = (undefined1)uVar3;
  uStack_48 = (undefined1)((ulong)uVar3 >> 8);
  uStack_47 = (undefined6)((ulong)uVar3 >> 0x10);
  uStack_41 = 0;
                    /* try { // try from 00580340 to 005803f7 has its CatchHandler @ 00580450 */
  local_28 = FUN_005804b0();
  if (param_2 == -0x8000000000000000) {
    if (param_3 == 0xffffffff) {
      *param_1 = 0x1a;
      uVar3 = CONCAT35(s_infinite_past_03a33f52._5_3_,s_infinite_past_03a33f52._0_5_);
      uVar1 = CONCAT53(s_infinite_past_03a33f52._8_5_,s_infinite_past_03a33f52._5_3_);
      param_1[1] = 0;
      param_1[2] = 0;
      *(undefined8 *)((long)param_1 + 6) = uVar1;
      *(undefined8 *)((long)param_1 + 1) = uVar3;
      *(undefined1 *)((long)param_1 + 0xe) = 0;
      return;
    }
  }
  else if ((param_2 == 0x7fffffffffffffff) && (param_3 == 0xffffffff)) {
    *param_1 = 0x1e;
    uVar3 = CONCAT17(s_infinite_future_03a33f42[7],s_infinite_future_03a33f42._0_7_);
    uVar1 = CONCAT71(s_infinite_future_03a33f42._8_7_,s_infinite_future_03a33f42[7]);
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[1] = uVar1;
    *(undefined8 *)((long)param_1 + 1) = uVar3;
    *(undefined1 *)(param_1 + 2) = 0;
    return;
  }
  lVar2 = std::chrono::system_clock::from_time_t(0);
  lStack_38 = (ulong)param_3 * 250000;
  local_40 = lVar2 / 1000000 + param_2;
  FUN_00588ab0(param_1,&local_58,&local_40,&lStack_38,&local_28);
  if ((local_58 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,CONCAT17(uStack_41,CONCAT61(uStack_47,uStack_48)));
  }
  return;
}



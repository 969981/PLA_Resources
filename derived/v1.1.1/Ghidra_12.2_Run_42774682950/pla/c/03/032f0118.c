/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f0118; name: FUN_032f0118
 */


undefined8 * FUN_032f0118(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_50;
  long lStack_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulong local_38;
  
  if (param_1 != param_2) {
    local_50 = *param_2;
    local_40 = *(undefined4 *)(param_2 + 1);
    lVar3 = param_2[2];
    uVar1 = *(undefined4 *)(param_1 + 1);
    local_3c = 0;
    local_38 = 0;
    lStack_48 = lVar3;
    if (lVar3 != 0) {
      local_3c = FUN_032e2120(lVar3);
      uVar2 = FUN_032e3508(lVar3);
      if ((uVar2 & 1) != 0) {
        FUN_032e0c28(uVar2 & 0xfffffffffffffffe);
      }
      local_38 = uVar2;
    }
    (**(code **)(DAT_0444a998 + 0x60))(&DAT_0444a998,param_1,&DAT_04352600,0,uVar1,&local_50);
    if ((local_38 & 1) != 0) {
      FUN_032e0c40(local_38 & 0xfffffffffffffffe);
    }
  }
  return param_1;
}



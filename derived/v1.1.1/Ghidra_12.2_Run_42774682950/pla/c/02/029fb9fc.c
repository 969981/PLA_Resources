/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029fb9fc; name: FUN_029fb9fc
 */


void FUN_029fb9fc(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined6 local_b0 [10];
  undefined6 uStack_60;
  undefined2 local_5a;
  undefined2 uStack_58;
  byte bStack_56;
  undefined1 uStack_55;
  byte bStack_54;
  undefined1 uStack_53;
  undefined1 *local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined1 auStack_38 [8];
  
  uStack_58 = 0;
  bStack_56 = 0;
  uStack_55 = 0;
  bStack_54 = 0;
  uStack_53 = 0;
  local_b0[9]._0_8_ = 0;
  uStack_60 = 0;
  local_5a = 0;
  local_b0[0]._0_8_ = 0;
  local_b0[7]._0_8_ = 0;
  local_b0[8]._0_8_ = 0;
  local_b0[5]._0_8_ = 0;
  local_b0[6]._0_8_ = 0;
  local_b0[3]._0_8_ = 0;
  local_b0[4]._0_8_ = 0;
  local_b0[1]._0_8_ = 0;
  local_b0[2]._0_8_ = 0;
  lVar2 = *(long *)(*(long *)(param_1 + 0x60) + 0x12c0);
  FUN_029e9bc4(lVar2,local_b0);
  local_50 = (undefined1 *)local_b0;
  FUN_029f7874(*(undefined8 *)(*(long *)(lVar2 + 0x60) + 0x17e0),auStack_38,&local_50);
  if (bStack_56 != 0) {
    uVar1 = 0;
    while( true ) {
      bStack_54 = (char)uVar1 + 1;
      puVar3 = *(undefined1 **)(local_b0 + uVar1);
      if (puVar3 == (undefined1 *)0x0) break;
      if ((*(short *)(puVar3 + 0x74) != 0) && ((puVar3[0x387] & 0x30) == 0)) {
        FUN_029fbb04(param_1,puVar3,1);
        local_48 = 1;
        local_40 = 0;
        local_50 = puVar3;
        FUN_029d6ea4(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x440),auStack_38,&local_50);
      }
      if (**(char **)(*(long *)(param_1 + 0x40) + 0x28) == '\x05') {
        return;
      }
      uVar1 = (ulong)bStack_54;
      if (bStack_56 <= bStack_54) {
        return;
      }
    }
  }
  return;
}



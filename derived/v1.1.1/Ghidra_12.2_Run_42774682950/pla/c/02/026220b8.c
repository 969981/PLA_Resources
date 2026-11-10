/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026220b8; name: FUN_026220b8
 */


undefined1 FUN_026220b8(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [8];
  undefined8 local_28;
  undefined1 local_11;
  
  local_28 = param_1;
  uVar3 = FUN_026743c0(param_1);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  FUN_02672e44(auStack_40,param_1);
  FUN_02620504(auStack_30,auStack_40);
  FUN_02621924(auStack_40);
  uVar3 = FUN_0262052c(auStack_30);
  if ((uVar3 & 1) != 0) {
    FUN_02620558(auStack_30);
    FUN_01a73640(auStack_58);
    FUN_02621fd8(auStack_48,auStack_58);
    FUN_026204b8(auStack_58);
    uVar3 = FUN_0262203c(auStack_48);
    if ((uVar3 & 1) == 0) {
LAB_0262216c:
      bVar1 = false;
    }
    else {
      FUN_02622068(auStack_48);
      uVar3 = FUN_01b0de78();
      if ((uVar3 & 1) == 0) goto LAB_0262216c;
      local_11 = 0;
      bVar1 = true;
    }
    FUN_02622080(auStack_48);
    bVar2 = true;
    if (bVar1) goto LAB_026221b8;
    FUN_02620558(auStack_30);
    uVar3 = FUN_01aee5b8();
    if ((uVar3 & 1) != 0) {
      local_11 = 0;
      bVar2 = true;
      goto LAB_026221b8;
    }
  }
  bVar2 = false;
LAB_026221b8:
  FUN_02620ce4(auStack_30);
  if (!bVar2) {
    local_11 = 1;
  }
  return local_11;
}



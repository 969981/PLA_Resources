/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006fb804; name: FUN_006fb804
 */


bool FUN_006fb804(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_50 [16];
  ulong local_40;
  undefined1 auStack_18 [8];
  
  lVar3 = *param_1;
  if ((lVar3 == 0) || (lVar1 = param_1[1], lVar1 == 0)) {
    FUN_0030f640(auStack_50,3,"external/com_google_protobuf/src\\google/protobuf/map.h",0x20e);
                    /* try { // try from 006fb840 to 006fb853 has its CatchHandler @ 006fb910 */
    uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: node_ != nullptr && m_ != nullptr: ");
                    /* try { // try from 006fb854 to 006fb85b has its CatchHandler @ 006fb90c */
    FUN_0030f41c(auStack_18,uVar2);
    FUN_0030f658(auStack_50);
    lVar3 = *param_1;
    lVar1 = param_1[1];
  }
  uVar5 = param_1[2] & *(long *)(lVar1 + 8) - 1U;
  param_1[2] = uVar5;
  lVar4 = *(long *)(*(long *)(lVar1 + 0x20) + uVar5 * 8);
  if (lVar4 != lVar3) {
    if ((lVar4 == 0) || (lVar4 == *(long *)(*(long *)(lVar1 + 0x20) + (uVar5 ^ 1) * 8))) {
LAB_006fb8b4:
      FUN_006fba94(auStack_50,lVar1,lVar3,param_2);
      param_1[2] = local_40;
      lVar3 = *(long *)(*(long *)(param_1[1] + 0x20) + local_40 * 8);
      if (lVar3 != 0) {
        return lVar3 != *(long *)(*(long *)(param_1[1] + 0x20) + (local_40 ^ 1) * 8);
      }
    }
    else {
      do {
        lVar4 = *(long *)(lVar4 + 0x10);
        if (lVar4 == 0) goto LAB_006fb8b4;
      } while (lVar4 != lVar3);
    }
  }
  return true;
}



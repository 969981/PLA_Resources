/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0182fe2c; name: FUN_0182fe2c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0182fe2c(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  char local_120 [20];
  uint local_10c;
  ulong local_e0;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  fVar6 = (float)*param_2;
  fVar7 = (float)((ulong)*param_2 >> 0x20);
  local_40 = CONCAT44(fVar7 + (float)((ulong)_DAT_03889a40 >> 0x20),fVar6 + (float)_DAT_03889a40);
  fVar8 = (float)param_2[1];
  fVar9 = (float)((ulong)param_2[1] >> 0x20);
  uStack_38 = CONCAT44(fVar9 + (float)((ulong)_UNK_03889a48 >> 0x20),fVar8 + (float)_UNK_03889a48);
  local_50 = CONCAT44(fVar7 + (float)((ulong)_DAT_0388a4d0 >> 0x20),fVar6 + (float)_DAT_0388a4d0);
  uStack_48 = CONCAT44(fVar9 + (float)((ulong)_UNK_0388a4d8 >> 0x20),fVar8 + (float)_UNK_0388a4d8);
  FUN_01830bb8(local_120,param_1,param_2,&local_40,&local_50,0x1001000);
  if (local_120[0] == '\0') {
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    if ((local_e0 & 1) != 0) {
      lVar1 = tpidr_el0;
      lVar5 = *(long *)(lVar1 + 0x38d490);
      if (lVar5 == 0) {
        lVar5 = FUN_0333d16c(0,1);
        *(long *)(lVar1 + 0x38d490) = lVar5;
      }
      plVar2 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
      *(undefined8 *)(local_e0 - 0x11) = 0;
      (**(code **)(*plVar2 + 0x18))
                (plVar2,(undefined8 *)(local_e0 - 0x11),(long)*(int *)(local_e0 - 9) + 0x10);
    }
    uVar4 = (ulong)local_10c << 0x20;
    uVar3 = 1;
  }
  return uVar4 | uVar3;
}



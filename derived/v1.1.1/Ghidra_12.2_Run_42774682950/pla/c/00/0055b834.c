/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0055b834; name: FUN_0055b834
 */


void FUN_0055b834(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  lVar4 = *(long *)(param_1 + 0xc0);
  if (lVar4 != 0) {
    FUN_002e2f10(lVar4);
    FUN_002e2ef0(PTR_LAB_04373088,lVar4);
  }
  puVar3 = PTR_LAB_04373088;
  lVar4 = *(long *)(param_1 + 0x90);
  if (*(long *)(param_1 + 0x98) != lVar4) {
    uVar2 = *(ulong *)(param_1 + 0xa8);
    uVar1 = *(long *)(param_1 + 0xb0) + uVar2;
    plVar6 = (long *)(lVar4 + (uVar2 >> 5 & 0x7fffffffffffff8));
    lVar7 = *plVar6 + (uVar2 & 0xff) * 0x10;
    lVar4 = *(long *)(lVar4 + (uVar1 >> 5 & 0x7fffffffffffff8)) + (uVar1 & 0xff) * 0x10;
    if (lVar4 != lVar7) {
      lVar5 = *(long *)(lVar7 + 8);
      while( true ) {
        if (lVar5 != 0) {
          FUN_002e2f10(lVar5);
          FUN_002e2ef0(puVar3,lVar5);
        }
        lVar7 = lVar7 + 0x10;
        if (lVar7 - *plVar6 == 0x1000) {
          plVar6 = plVar6 + 1;
          lVar7 = *plVar6;
        }
        if (lVar4 == lVar7) break;
        lVar5 = *(long *)(lVar7 + 8);
      }
    }
  }
  FUN_0055b5f0(param_1 + 0x88);
  lVar4 = *(long *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (lVar4 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  FUN_0055b764(param_1 + 0x50);
  FUN_0055b764(param_1 + 0x28);
  return;
}



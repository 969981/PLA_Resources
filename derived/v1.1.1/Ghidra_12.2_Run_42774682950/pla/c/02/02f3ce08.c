/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3ce08; name: FUN_02f3ce08
 */


void FUN_02f3ce08(long param_1,ulong param_2,int param_3,uint param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  int local_94;
  int local_90;
  int local_8c;
  undefined1 auStack_88 [40];
  
  if (param_4 == 0) {
    return;
  }
  FUN_02f3c9c4(param_1,param_2,auStack_88);
  iVar5 = (int)param_2;
  if ((param_4 >> 0xd & 1) != 0) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x18) + 0x78);
    lVar4 = *(long *)(lVar6 + 0x100);
    uVar7 = *(int *)(lVar4 + 4) + iVar5;
    uVar1 = uVar7 + param_3;
    if ((int)uVar7 < 0) {
      if ((int)uVar1 < 1) goto LAB_02f3ce78;
      uVar7 = 0;
    }
    iVar2 = *(int *)(lVar6 + 0x108);
    if (iVar2 != 2) {
      uVar8 = 2;
      do {
        uVar3 = *(uint *)(lVar4 + (ulong)(uVar8 - 1) * 0x10 + 4);
        if (uVar7 <= uVar3) {
          if (uVar1 <= uVar3) break;
          FUN_02edd6a8(DAT_0440a170,param_5,auStack_88,
                       *(undefined8 *)(lVar4 + (ulong)(uVar8 - 1) * 0x10 + 8));
        }
        if (iVar2 - 2U < uVar8) break;
        lVar4 = *(long *)(lVar6 + 0x100);
        uVar8 = uVar8 + 1;
      } while( true );
    }
  }
LAB_02f3ce78:
  if (((0 < param_3 + iVar5) && (iVar5 < 1)) && ((param_4 >> 10 & 1) != 0)) {
    FUN_02edd58c(DAT_0440a170,param_5,0x400,auStack_88);
  }
  FUN_02f42bd4(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x78),param_2 & 0xffffffff,param_3,
               &local_8c,&local_90,&local_94);
  if ((param_4 >> 9 & 1) != 0) {
    for (; local_8c != 0; local_8c = local_8c + -1) {
      FUN_02edd58c(DAT_0440a170,param_5,0x200,auStack_88);
    }
  }
  iVar2 = local_90;
  if ((param_4 >> 8 & 1) != 0) {
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      FUN_02edd58c(DAT_0440a170,param_5,0x100,auStack_88);
    }
  }
  iVar2 = local_94;
  if ((param_4 >> 0xc & 1) != 0) {
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      FUN_02edd58c(DAT_0440a170,param_5,0x1000,auStack_88);
    }
  }
  if (((param_4 >> 0xb & 1) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x78), lVar6 = *(long *)(lVar4 + 0x100),
     iVar2 = *(int *)(lVar6 + (ulong)*(uint *)(lVar4 + 0x108) * 0x10 + -0xc) - *(int *)(lVar6 + 4),
     iVar5 <= iVar2 && iVar2 < param_3 + iVar5)) {
    FUN_02edd58c(DAT_0440a170,param_5,0x800,auStack_88);
  }
  return;
}



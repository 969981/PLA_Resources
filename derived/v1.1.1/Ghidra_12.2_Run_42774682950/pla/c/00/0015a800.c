/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0015a800; name: FUN_0015a800
 */


void FUN_0015a800(long param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  ulong uVar7;
  long lVar8;
  undefined4 local_c0 [10];
  undefined4 local_98;
  long local_48;
  
  pcVar6 = *(code **)(param_1 + 0xa8);
  if ((pcVar6 != (code *)0x0) && (*(char *)(param_1 + 0xcc) != '\0')) {
    lVar5 = *(long *)(param_1 + 0x20);
    lVar4 = *(long *)(param_1 + 0x10);
    lVar8 = *(long *)(lVar5 + 8);
    lVar2 = *(long *)(param_1 + 0x38);
    uVar7 = lVar4 - lVar2;
    local_c0[0] = param_2;
    local_98 = param_3;
    local_48 = lVar5;
    if (*(long *)(param_1 + 0x30) - lVar4 < 0x150) {
      if (1000000 < *(int *)(param_1 + 0xb8)) {
                    /* WARNING: Subroutine does not return */
        FUN_0015a320(param_1,6);
      }
      iVar3 = *(int *)(param_1 + 0xb8) * 2;
      iVar1 = (int)(uVar7 >> 4) + 0x19;
      if (999999 < iVar3) {
        iVar3 = 1000000;
      }
      if (iVar1 <= iVar3) {
        iVar1 = iVar3;
      }
      if (1000000 < iVar1) {
        FUN_0015a490(param_1,0xf4308);
                    /* WARNING: Subroutine does not return */
        FUN_001599d0(param_1,"stack overflow");
      }
      FUN_0015a490(param_1);
      lVar4 = *(long *)(param_1 + 0x10);
    }
    *(long *)(lVar5 + 8) = lVar4 + 0x140;
    *(undefined1 *)(param_1 + 0xcc) = 0;
    *(ushort *)(lVar5 + 0x42) = *(ushort *)(lVar5 + 0x42) | 4;
    (*pcVar6)(param_1,local_c0);
    *(undefined1 *)(param_1 + 0xcc) = 1;
    *(long *)(lVar5 + 8) = *(long *)(param_1 + 0x38) + (lVar8 - lVar2);
    *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 0x38) + uVar7;
    *(ushort *)(lVar5 + 0x42) = *(ushort *)(lVar5 + 0x42) & 0xfffb;
  }
  return;
}



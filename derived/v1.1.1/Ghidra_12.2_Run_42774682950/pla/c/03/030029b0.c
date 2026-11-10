/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030029b0; name: FUN_030029b0
 */


void FUN_030029b0(long *param_1,long *param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  undefined2 *puVar6;
  long lVar7;
  long lVar8;
  short *psVar9;
  short *__src;
  ulong uVar10;
  undefined1 auStack_44 [4];
  
  psVar9 = (short *)*param_1;
  if ((int)param_3 < 9) {
    param_3 = 8;
  }
  lVar4 = param_1[1];
  iVar2 = *(int *)((long)param_1 + 0xc);
  puVar6 = (undefined2 *)(**(code **)(*param_2 + 0x10))(param_2,(long)(int)(param_3 << 4),0);
  if (puVar6 != (undefined2 *)0x0) {
    uVar3 = param_3 - 1;
    lVar7 = 0;
    *param_1 = (long)puVar6;
    *puVar6 = 0xffff;
    lVar8 = (((ulong)uVar3 & 1) - (ulong)param_3) + 1;
    do {
      *(undefined2 *)(*param_1 + lVar7 + 0x10) = 0xffff;
      lVar1 = *param_1 + lVar7;
      lVar7 = lVar7 + 0x20;
      lVar8 = lVar8 + 2;
      *(undefined2 *)(lVar1 + 0x20) = 0xffff;
    } while (lVar8 != 0);
    if ((uVar3 & 1) != 0) {
      *(undefined2 *)(*param_1 + lVar7 + 0x10) = 0xffff;
    }
    *(undefined4 *)(param_1 + 1) = 0;
    *(uint *)((long)param_1 + 0xc) = uVar3;
    if (-1 < iVar2) {
      uVar10 = (ulong)(iVar2 + 1);
      __src = psVar9;
      do {
        if (*__src != -1) {
          iVar5 = FUN_030028ec(param_1,param_2,__src,auStack_44);
          memcpy((void *)(*param_1 + (long)iVar5 * 0x10),__src,0x10);
        }
        uVar10 = uVar10 - 1;
        __src = __src + 8;
      } while (uVar10 != 0);
    }
    if (-1 < (int)lVar4) {
                    /* WARNING: Could not recover jumptable at 0x03002a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x18))(param_2,psVar9,(long)(iVar2 * 0x10 + 0x10));
      return;
    }
  }
  return;
}



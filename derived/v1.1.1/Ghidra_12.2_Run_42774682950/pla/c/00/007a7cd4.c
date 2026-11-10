/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007a7cd4; name: FUN_007a7cd4
 */


undefined1 * FUN_007a7cd4(long param_1,undefined1 *param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined1 *puVar5;
  void *__src;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  size_t __n;
  int iVar9;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
LAB_007a7db8:
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
      if ((*(byte *)(uVar8 + 8) & 1) == 0) {
        __src = (void *)(uVar8 + 9);
        uVar6 = (ulong)(*(byte *)(uVar8 + 8) >> 1);
      }
      else {
        uVar6 = *(ulong *)(uVar8 + 0x10);
        __src = *(void **)(uVar8 + 0x18);
      }
      __n = (size_t)(int)uVar6;
      if (*param_3 - (long)param_2 < (long)__n) {
        puVar5 = (undefined1 *)FUN_00310fe4(param_3,__src,uVar6,param_2);
        return puVar5;
      }
      memcpy(param_2,__src,__n);
      param_2 = param_2 + __n;
    }
    return param_2;
  }
  iVar9 = 0;
  if (param_2 < (undefined1 *)*param_3) goto LAB_007a7d40;
  do {
    param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
LAB_007a7d40:
    do {
      lVar4 = FUN_007b109c(param_1 + 0x10,iVar9);
      *param_2 = 10;
      uVar7 = *(uint *)(lVar4 + 0x78);
      if (uVar7 < 0x80) {
        param_2[1] = (byte)uVar7;
        param_2 = param_2 + 2;
      }
      else {
        param_2[1] = (byte)uVar7 | 0x80;
        if (uVar7 >> 0xe == 0) {
          param_2[2] = (char)(uVar7 >> 7);
          param_2 = param_2 + 3;
        }
        else {
          param_2 = param_2 + 3;
          uVar7 = uVar7 >> 7;
          do {
            puVar5 = param_2;
            uVar2 = uVar7 >> 7;
            puVar5[-1] = (byte)uVar7 | 0x80;
            param_2 = puVar5 + 1;
            uVar3 = uVar7 >> 0xe;
            uVar7 = uVar2;
          } while (uVar3 != 0);
          *puVar5 = (char)uVar2;
        }
      }
      param_2 = (undefined1 *)FUN_0079e37c(lVar4,param_2,param_3);
      iVar9 = iVar9 + 1;
      if (iVar9 == iVar1) goto LAB_007a7db8;
    } while (param_2 < (undefined1 *)*param_3);
  } while( true );
}



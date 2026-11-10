/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0045da90; name: FUN_0045da90
 */


undefined8 FUN_0045da90(undefined8 param_1,int param_2,uint param_3,int *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  byte bVar5;
  size_t sVar6;
  long lVar7;
  size_t __n;
  long lVar8;
  ulong uVar9;
  byte abStack_51 [15];
  char local_42 [2];
  
  iVar2 = *param_4;
  __n = (size_t)iVar2;
  if (iVar2 < 0) {
LAB_0045db28:
    uVar4 = 0;
  }
  else {
    if (param_2 == 1) {
      if (4 < iVar2) goto LAB_0045db28;
      if (iVar2 < 1) {
        sVar6 = 0;
      }
      else {
        memcpy(abStack_51 + 1,*(void **)(param_4 + 2),__n);
        if ((*(ulong *)(param_4 + 4) & 7) != 0) {
          uVar3 = 8 - (int)(*(ulong *)(param_4 + 4) & 7);
          if ((param_3 & 0xff) == 0) {
            bVar5 = abStack_51[__n] & (byte)(-0x100 >> (uVar3 & 0x1f));
          }
          else {
            bVar5 = abStack_51[__n] | (byte)(0xff >> (ulong)(uVar3 & 0x1f));
          }
          abStack_51[__n] = bVar5;
        }
        sVar6 = __n;
      }
      memset(abStack_51 + sVar6 + 1,param_3,4 - __n);
      FUN_00402590(param_1,"%d.%d.%d.%d",abStack_51[1],abStack_51[2],abStack_51[3],abStack_51[4]);
    }
    else if (param_2 == 2) {
      if (0x10 < iVar2) goto LAB_0045db28;
      if (iVar2 < 1) {
        __n = 0;
      }
      else {
        memcpy(abStack_51 + 1,*(void **)(param_4 + 2),__n);
        if ((*(ulong *)(param_4 + 4) & 7) != 0) {
          uVar3 = 8 - (int)(*(ulong *)(param_4 + 4) & 7);
          if ((param_3 & 0xff) == 0) {
            bVar5 = abStack_51[__n] & (byte)(-0x100 >> (uVar3 & 0x1f));
          }
          else {
            bVar5 = abStack_51[__n] | (byte)(0xff >> (ulong)(uVar3 & 0x1f));
          }
          abStack_51[__n] = bVar5;
        }
      }
      memset(abStack_51 + __n + 1,param_3,(long)(0x10 - iVar2));
      lVar8 = 0;
      do {
        lVar7 = lVar8;
        if (lVar7 == -0x10) goto LAB_0045dce0;
      } while ((local_42[lVar7 + 1] == '\0') && (lVar8 = lVar7 + -2, local_42[lVar7] == '\0'));
      if ((int)(lVar7 + 0x10U) < 1) {
LAB_0045dce0:
        FUN_004044c0(param_1,&DAT_039b07fe);
      }
      else {
        uVar9 = 0;
        do {
          puVar1 = &DAT_039b07fe;
          if (0xd < uVar9) {
            puVar1 = &DAT_03996322;
          }
          FUN_00402590(param_1,&DAT_039107ac,CONCAT11(abStack_51[uVar9 + 1],abStack_51[uVar9 + 2]),
                       puVar1);
          uVar9 = uVar9 + 2;
        } while (uVar9 < (lVar7 + 0x10U & 0xfffffffe));
        if ((0xf < (uint)uVar9) || (FUN_004044c0(param_1,&DAT_039b07fe), (uint)uVar9 != 0))
        goto LAB_0045dd5c;
      }
      FUN_004044c0(param_1,&DAT_039b07fe);
    }
    else {
      if (0 < iVar2) {
        lVar8 = 0;
        do {
          puVar1 = &DAT_03996322;
          if (lVar8 != 0) {
            puVar1 = &DAT_039b07fe;
          }
          FUN_00402590(param_1,"%s%02x",puVar1,*(undefined1 *)(*(long *)(param_4 + 2) + lVar8));
          lVar8 = lVar8 + 1;
        } while (lVar8 < *param_4);
      }
      FUN_00402590(param_1,&DAT_0397a540,param_4[4] & 7);
    }
LAB_0045dd5c:
    uVar4 = 1;
  }
  return uVar4;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c6770; name: FUN_004c6770
 */


undefined8 FUN_004c6770(long param_1,int param_2,long param_3,ulong param_4,undefined8 *param_5)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  if ((param_4 < *(ulong *)(param_1 + 6000)) ||
     ((((*(byte *)(param_1 + 0x5d0) >> 1 & 1) == 0 && (*(long *)(param_1 + 0x1788) != param_3)) ||
      (*(int *)(param_1 + 0x1778) != param_2)))) {
    FUN_004c99a0(param_1,0x50,0x9f,0x7f,"external/openssl/ssl/record/rec_layer_s3.c",0x46b);
    return 0xffffffff;
  }
  lVar9 = 0;
  uVar10 = 0;
  do {
    lVar7 = param_1 + uVar10 * 0x28;
    plVar1 = (long *)(lVar7 + 0x860);
    plVar2 = (long *)(lVar7 + 0x858);
    lVar8 = *(long *)(lVar7 + 0x860);
    while ((lVar8 != 0 || (*(long *)(param_1 + 0x810) - 1U <= uVar10))) {
      piVar5 = __errno_location();
      *piVar5 = 0;
      if (*(long *)(param_1 + 0x18) == 0) {
        FUN_004c99a0(param_1,0x50,0x9f,0x80,"external/openssl/ssl/record/rec_layer_s3.c",0x482);
        uVar6 = 0xffffffff;
LAB_004c68e4:
        if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) >> 3 & 1) == 0) {
          return uVar6;
        }
        *plVar1 = 0;
        return uVar6;
      }
      *(undefined4 *)(param_1 + 0x28) = 2;
      uVar6 = FUN_004042b0(*(long *)(param_1 + 0x18),*(long *)(lVar7 + 0x840) + *plVar2,
                           *(undefined4 *)plVar1);
      iVar4 = (int)uVar6;
      lVar3 = (long)iVar4;
      if (iVar4 < 0) {
        lVar3 = lVar9;
      }
      if (iVar4 < 1) goto LAB_004c68e4;
      lVar8 = *plVar1 - lVar3;
      lVar9 = lVar3;
      if (lVar8 == 0) {
        *plVar1 = 0;
        *plVar2 = *plVar2 + lVar3;
        if (*(ulong *)(param_1 + 0x810) <= uVar10 + 1) {
          *(undefined4 *)(param_1 + 0x28) = 1;
          *param_5 = *(undefined8 *)(param_1 + 0x1780);
          return 1;
        }
      }
      else {
        *plVar2 = *plVar2 + lVar3;
        *plVar1 = lVar8;
      }
    }
    uVar10 = uVar10 + 1;
  } while( true );
}



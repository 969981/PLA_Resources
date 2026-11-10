/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008f4ff8; name: FUN_008f4ff8
 */


void FUN_008f4ff8(long param_1,long param_2,int *param_3,char *param_4)

{
  byte *pbVar1;
  undefined8 *puVar2;
  size_t sVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  size_t sVar7;
  ulong uVar8;
  long lVar9;
  
  uVar5 = FUN_008fb77c();
  lVar9 = 0;
  uVar8 = 0;
  while( true ) {
    lVar6 = FUN_008cca50();
    pbVar1 = (byte *)(lVar6 + lVar9);
    sVar7 = strlen(param_4);
    sVar3 = (ulong)(*pbVar1 >> 1);
    if ((*pbVar1 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar1 + 8);
    }
    if ((sVar7 == sVar3) &&
       (iVar4 = std::string::compare((ulong)pbVar1,0,(char *)0xffffffffffffffff,(ulong)param_4),
       iVar4 == 0)) break;
    uVar8 = uVar8 + 1;
    lVar9 = lVar9 + 0x18;
    if (uVar8 == 0x20) {
LAB_008f50f0:
      puVar2 = (undefined8 *)(param_2 + (long)*param_3 * 0x10);
      *puVar2 = param_4;
      puVar2[1] = uVar5;
      *param_3 = *param_3 + 1;
      return;
    }
  }
  iVar4 = (int)uVar8;
  if (iVar4 == 1) {
    *(undefined8 *)(param_1 + 0x30) = uVar5;
  }
  else {
    if (iVar4 != 2) {
      if (iVar4 == 0x13) {
        *(undefined8 *)(param_1 + 0x850) = uVar5;
        return;
      }
      *(ulong *)(param_1 + 0x898) = *(ulong *)(param_1 + 0x898) | 1L << (uVar8 & 0x3f);
      goto LAB_008f50f0;
    }
    *(undefined8 *)(param_1 + 0x38) = uVar5;
  }
  *(undefined1 *)(param_1 + 0x58) = 1;
  *(ulong *)(param_1 + 0x898) = *(ulong *)(param_1 + 0x898) | 1L << (uVar8 & 0x3f);
  return;
}



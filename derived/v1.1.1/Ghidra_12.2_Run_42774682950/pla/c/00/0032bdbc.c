/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032bdbc; name: FUN_0032bdbc
 */


void FUN_0032bdbc(long *param_1,undefined8 param_2)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  
  piVar2 = (int *)param_1[2];
  if (piVar2 == (int *)0x0) {
    iVar4 = (int)param_1[1];
    iVar3 = *(int *)((long)param_1 + 0xc);
    if (iVar4 <= iVar3) goto LAB_0032be50;
    piVar2 = (int *)0x0;
LAB_0032be64:
    iVar4 = *piVar2;
  }
  else {
    iVar3 = (int)param_1[1];
    iVar4 = iVar3;
    if (iVar3 == *(int *)((long)param_1 + 0xc)) {
LAB_0032be50:
      FUN_0032beb0(param_1,(iVar3 - iVar4) + 1);
LAB_0032be60:
      piVar2 = (int *)param_1[2];
      goto LAB_0032be64;
    }
    iVar4 = *piVar2;
    if (iVar4 == *(int *)((long)param_1 + 0xc)) {
      pbVar5 = *(byte **)(piVar2 + (long)iVar3 * 2 + 2);
      if (pbVar5 != (byte *)0x0 && *param_1 == 0) {
        if ((*pbVar5 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar5 + 0x10));
        }
        FUN_002e2ea0(PTR_LAB_04373088,pbVar5);
        piVar2 = (int *)param_1[2];
      }
      goto LAB_0032be70;
    }
    if (iVar3 < iVar4) {
      *(undefined8 *)(piVar2 + (long)iVar4 * 2 + 2) = *(undefined8 *)(piVar2 + (long)iVar3 * 2 + 2);
      goto LAB_0032be60;
    }
  }
  *piVar2 = iVar4 + 1;
LAB_0032be70:
  lVar1 = param_1[1];
  *(int *)(param_1 + 1) = (int)lVar1 + 1;
  *(undefined8 *)(piVar2 + (long)(int)lVar1 * 2 + 2) = param_2;
  return;
}



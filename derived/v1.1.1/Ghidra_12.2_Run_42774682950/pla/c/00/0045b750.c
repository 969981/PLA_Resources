/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0045b750; name: FUN_0045b750
 */


undefined8
FUN_0045b750(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5
            )

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined8 local_38;
  
  lVar2 = FUN_0045b610();
  if (lVar2 == 0) {
    return 0;
  }
  piVar6 = *(int **)(lVar2 + 8);
  if (piVar6 == (int *)0x0) {
    return 0;
  }
  if (*piVar6 == 1) {
    lVar3 = *(long *)(piVar6 + 2);
    if (lVar3 != 0) goto LAB_0045b7ec;
  }
  else if ((*piVar6 == 0) && (*(long *)(piVar6 + 2) != 0)) {
    return 0;
  }
  lVar3 = FUN_004071e0();
  if (lVar3 == 0) {
    return 0;
  }
  if (param_2 == 1) {
    puVar5 = &LAB_0045d780;
LAB_0045b7d4:
    FUN_00406ef0(lVar3,puVar5);
  }
  else if (param_2 == 2) {
    puVar5 = &LAB_0045d790;
    goto LAB_0045b7d4;
  }
  puVar7 = *(undefined4 **)(lVar2 + 8);
  *puVar7 = 1;
  *(long *)(puVar7 + 2) = lVar3;
LAB_0045b7ec:
  uVar4 = FUN_0045b850(&local_38,param_4,param_5);
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  iVar1 = FUN_00407800(lVar3,local_38);
  if (iVar1 == 0) {
    FUN_00421810(local_38,PTR_DAT_04374378);
    return 0;
  }
  return 1;
}



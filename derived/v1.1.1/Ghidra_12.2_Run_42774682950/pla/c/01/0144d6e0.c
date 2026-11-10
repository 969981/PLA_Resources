/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0144d6e0; name: FUN_0144d6e0
 */


void FUN_0144d6e0(undefined8 param_1,ulong param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *local_48;
  long *local_38;
  
  puVar4 = PTR_DAT_04379558;
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  puVar6 = PTR_DAT_04379568;
  puVar5 = PTR_DAT_04379560;
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148cdc(&local_38);
  FUN_01123ce0(local_38,1 < (int)param_2);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)puVar6 = *(undefined8 *)puVar5;
  FUN_0114907c(&local_48);
  lVar8 = (long)(int)(((uint)(param_2 >> 0x1e) & 0xfffffffc) + (int)param_2) * 0x30;
  FUN_0111b748(local_48,0,*(undefined8 *)(&DAT_03a7bce0 + lVar8));
  FUN_0111b748(local_48,1,*(undefined8 *)(&DAT_03a7bcd8 + lVar8));
  FUN_0111b748(local_48,2,*(undefined8 *)(&DAT_03a7bcd0 + lVar8));
  FUN_0111b748(local_48,3,&DAT_cbf29ce484222645);
  FUN_0111b748(local_48,4,&DAT_cbf29ce484222645);
  FUN_0111b748(local_48,5,&DAT_cbf29ce484222645);
  FUN_0111b748(local_48,6,&DAT_cbf29ce484222645);
  FUN_0111b748(local_48,7,*(undefined8 *)(&DAT_03a7bcc8 + lVar8));
  FUN_0111b748(local_48,8,*(undefined8 *)(&DAT_03a7bce8 + lVar8));
  FUN_0111b748(local_48,9,&DAT_cbf29ce484222645);
  FUN_0111b748(local_48,10,&DAT_cbf29ce484222645);
  FUN_0111b748(local_48,0xb,*(undefined8 *)(&DAT_03a7bcf0 + lVar8));
  FUN_0135ff60();
  if (local_48 != (long *)0x0) {
    lVar8 = local_48[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (local_38 != (long *)0x0) {
    lVar8 = local_38[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0129f180; name: FUN_0129f180
 */


uint FUN_0129f180(undefined8 param_1,int param_2)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 *local_158;
  undefined8 *puStack_150;
  undefined8 local_148;
  long *local_140;
  long *local_138;
  undefined8 local_130;
  char *pcStack_128;
  undefined8 local_120;
  long *local_118;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148a98(&local_138);
  if (param_2 == 0) {
    local_130 = 0x225114ae312d393a;
    pcStack_128 = "FSYS_ARRIVAL_AREA_00_VILLAGE";
    local_120 = 0x1c;
    local_118 = (long *)0x0;
    uVar6 = FUN_010f4bb4(local_138,&local_130);
    plVar5 = local_118;
  }
  else {
    puVar10 = &DAT_cbf29ce484222645;
    snprintf((char *)&local_130,0x100,"FSYS_ARRIVAL_AREA_%02d",param_2);
    if ((byte)local_130 != 0) {
      pbVar8 = (byte *)((ulong)&local_130 | 1);
      bVar2 = (byte)local_130;
      do {
        puVar10 = (undefined1 *)(((ulong)puVar10 ^ (ulong)bVar2) * 0x100000001b3);
        bVar2 = *pbVar8;
        pbVar8 = pbVar8 + 1;
      } while (bVar2 != 0);
    }
    local_148 = 0xff;
    local_140 = (long *)0x0;
    local_158 = puVar10;
    puStack_150 = &local_130;
    uVar6 = FUN_010f4bb4(local_138,&local_158);
    plVar5 = local_140;
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  if (local_138 != (long *)0x0) {
    lVar9 = local_138[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_138 + 0x20))();
    }
  }
  return uVar6 & 1;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0123801c; name: FUN_0123801c
 */


long FUN_0123801c(long param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  byte *pbVar11;
  undefined1 *puVar12;
  int iVar13;
  long *local_68;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_0114907c(&local_68);
  puVar8 = (undefined1 *)FUN_0111b784(local_68,param_3);
  if (puVar8 != &DAT_cbf29ce484222645) {
    iVar7 = FUN_01236600(param_1 + 0x1d0,param_2);
    puVar6 = PTR_PTR_04379d00;
    if (iVar7 != 0) {
      iVar13 = 0;
      do {
        lVar9 = FUN_012364f4(param_1 + 0x1d0,iVar13,param_2);
        puVar2 = (undefined8 *)puVar6;
        if (*(long *)(lVar9 + 8) != 0) {
          puVar2 = (undefined8 *)(*(long *)(lVar9 + 8) + 0x60);
        }
        pbVar11 = (byte *)*puVar2;
        bVar3 = *pbVar11;
        puVar12 = &DAT_cbf29ce484222645;
        if (bVar3 != 0) {
          puVar12 = &DAT_cbf29ce484222645;
          do {
            pbVar11 = pbVar11 + 1;
            puVar12 = (undefined1 *)(((ulong)puVar12 ^ (ulong)bVar3) * 0x100000001b3);
            bVar3 = *pbVar11;
          } while (bVar3 != 0);
        }
        if (puVar12 == puVar8) goto LAB_01238134;
        iVar13 = iVar13 + 1;
      } while (iVar13 != iVar7);
    }
  }
  lVar9 = param_1 + 0x3a8;
LAB_01238134:
  if (local_68 != (long *)0x0) {
    lVar10 = local_68[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  return lVar9;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011e8a2c; name: FUN_011e8a2c
 */


void FUN_011e8a2c(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 local_54 [4];
  undefined8 *local_50 [2];
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  undefined8 local_18;
  
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379690), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  uVar7 = *(undefined8 *)PTR_DAT_04379698;
  *(undefined8 *)PTR_DAT_043796a0 = uVar7;
  uVar5 = FUN_0286b0c0(uVar7,0x24);
  if ((uVar5 & 1) == 0) {
    local_18 = (ulong)local_18._4_4_ << 0x20;
    local_40 = 0xdca5acb5512330bd;
    pcStack_38 = "HayabusaSkyEnable";
    local_30 = 0x1f;
    local_28 = (long *)0x0;
    FUN_02ad63f8(&local_40,&local_18);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    local_18 = *(undefined8 *)(*(long *)PTR_DAT_04379ff8 + 0x68);
    local_54[0] = 1;
    FUN_011e8bf8(local_50,uVar7,0x24,local_18,&local_18,local_54);
    if (local_50[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_50[0] + 1);
      do {
        iVar4 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 + -1 == 0) {
        local_50[0][2] = 0;
        if ((*PTR_DAT_04379498 & 1) == 0) {
          iVar4 = __cxa_guard_acquire(PTR_DAT_04379498);
          if (iVar4 != 0) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
        }
        lVar6 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar6;
        local_40 = *local_50[0];
        FUN_02a44274(lVar6 + 0xd8,&local_40);
      }
    }
    FUN_0286b600(uVar7);
    FUN_0286aab0(uVar7,0x24);
  }
  return;
}



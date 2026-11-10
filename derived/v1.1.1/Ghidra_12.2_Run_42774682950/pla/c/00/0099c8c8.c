/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0099c8c8; name: FUN_0099c8c8
 */


void FUN_0099c8c8(float param_1,float param_2,undefined8 param_3,long param_4,byte param_5,
                 ulong param_6)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *local_60 [4];
  long *local_38;
  
  *(byte *)(param_4 + 0x570) = param_5 & 1;
  if (((*PTR_DAT_04379578 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379578), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar5 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar5;
  FUN_0098f80c(&local_38,lVar5 + 0xd8);
  if (local_38 != (long *)0x0) {
    FUN_0199c1ac(local_60);
    if (local_60[0] != (long *)0x0) {
      lVar5 = local_60[0][0xb];
      piVar1 = (int *)(lVar5 + 0xc);
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
        *(undefined8 *)(lVar5 + 0x18) = 0;
        (**(code **)(*local_60[0] + 0x20))(local_60[0]);
      }
      if ((param_5 & 1) == 0) {
        FUN_0256f78c(local_60[0]);
      }
      else {
        if ((param_6 & 1) != 0) {
          param_1 = (float)*(undefined8 *)(param_4 + 0x530) + param_1;
          param_2 = (float)*(undefined8 *)(param_4 + 0x538) + param_2;
        }
        FUN_02bcb320(param_3,local_60,CONCAT44(param_2,param_1));
        FUN_0256f764(local_60[0],local_60);
      }
    }
    if (local_38 != (long *)0x0) {
      lVar5 = local_38[0xb];
      piVar1 = (int *)(lVar5 + 0xc);
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
        *(undefined8 *)(lVar5 + 0x18) = 0;
        (**(code **)(*local_38 + 0x20))();
      }
    }
  }
  return;
}



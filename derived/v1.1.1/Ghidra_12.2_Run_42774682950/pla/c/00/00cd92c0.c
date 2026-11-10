/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cd92c0; name: FUN_00cd92c0
 */


void FUN_00cd92c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  float fVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long *local_28;
  
  FUN_00be5694(&local_28,param_3);
  if (local_28 != (long *)0x0) {
    local_40 = 0;
    uStack_38 = 0;
    FUN_00aacc18(param_1,param_2,&local_40,0);
    fVar6 = *(float *)PTR_FloatPi_04372cf0 / *(float *)PTR_FloatDegree180_04372ce0;
    FUN_009a7ff4(fVar6 * (float)((ulong)local_40 >> 0x20),fVar6 * (float)local_40,
                 fVar6 * (float)uStack_38);
    local_50 = CONCAT44(extraout_var,extraout_s0);
    uStack_48 = extraout_var_00;
    if ((param_4 & 1) == 0) {
      FUN_01a83770(local_28,param_1,&local_50);
    }
    else {
      FUN_01a89bd4(0x42c80000,local_28,param_1,&local_50);
    }
    if (local_28 != (long *)0x0) {
      lVar5 = local_28[0xb];
      piVar1 = (int *)(lVar5 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar5 + 0x18) = 0;
        (**(code **)(*local_28 + 0x20))();
      }
    }
  }
  return;
}



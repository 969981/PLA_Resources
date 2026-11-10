/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0261a5b8; name: FUN_0261a5b8
 */


void FUN_0261a5b8(float param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  char cVar4;
  bool bVar5;
  long **pplVar6;
  float *pfVar7;
  long lVar8;
  long *local_30;
  float local_24;
  
  local_30 = (long *)CONCAT44(local_30._4_4_,param_1);
  if (param_1 < *(float *)(param_2 + 0x200)) {
    pplVar6 = (long **)(param_2 + 0x200);
  }
  else {
    pplVar6 = (long **)(param_2 + 0x204);
    if (param_1 <= *(float *)(param_2 + 0x204)) {
      pplVar6 = &local_30;
    }
  }
  fVar3 = *(float *)pplVar6;
  *(float *)(param_2 + 0x1f8) = fVar3;
  FUN_01a50188(fVar3,param_2,param_2 + 0x220);
  if ((*(long *)(param_2 + 0xbf0) != 0) && (FUN_009cf990(&local_30), local_30 != (long *)0x0)) {
    local_24 = param_1;
    if (param_1 < *(float *)(local_30 + 0x40)) {
      pfVar7 = (float *)(local_30 + 0x40);
    }
    else {
      pfVar7 = (float *)((long)local_30 + 0x204);
      if (param_1 <= *(float *)((long)local_30 + 0x204)) {
        pfVar7 = &local_24;
      }
    }
    fVar3 = *pfVar7;
    *(float *)(local_30 + 0x3f) = fVar3;
    FUN_01a50188(fVar3,local_30,local_30 + 0x44);
    if (local_30 != (long *)0x0) {
      lVar8 = local_30[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_30 + 0x20))();
      }
    }
  }
  return;
}



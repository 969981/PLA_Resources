/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a0d8dc; name: FUN_01a0d8dc
 */


void FUN_01a0d8dc(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  float fVar6;
  long *local_18;
  
  fVar6 = 1.0;
  if (1.1920929e-07 < *(float *)(param_1 + 0x684)) {
    fVar6 = *(float *)(param_1 + 0x688) / *(float *)(param_1 + 0x684);
  }
  fVar6 = (float)(int)((1.0 - fVar6) * 4.0) * 0.25;
  if (1.1920929e-07 < fVar6) {
    FUN_009c69bc(&local_18);
    if (local_18 != (long *)0x0) {
      *(undefined1 *)(local_18 + 0x1c) = 1;
      lVar5 = local_18[0xb];
      piVar1 = (int *)(lVar5 + 0xc);
      local_18[0x17] = (ulong)(uint)fVar6;
      local_18[0x16] = CONCAT44(fVar6,fVar6);
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
        (**(code **)(*local_18 + 0x20))();
      }
    }
    return;
  }
  FUN_01b76b84(param_1,0);
  return;
}



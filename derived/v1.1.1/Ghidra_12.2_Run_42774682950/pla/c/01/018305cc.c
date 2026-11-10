/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018305cc; name: FUN_018305cc
 */


bool FUN_018305cc(long param_1)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  long *local_18;
  
  if (*(long *)(param_1 + 0x250) == 0) {
    bVar6 = false;
  }
  else {
    FUN_00b91400(&local_18);
    bVar6 = false;
    if (local_18 != (long *)0x0) {
      uVar7 = FUN_01c3c354();
      pfVar2 = (float *)(param_1 + 0x210);
      if ((uVar7 & 1) == 0) {
        pfVar2 = (float *)(param_1 + 0x208);
      }
      fVar10 = *pfVar2;
      fVar9 = (float)FUN_01830208(param_1);
      bVar6 = fVar10 <= fVar9;
      if (local_18 != (long *)0x0) {
        lVar8 = local_18[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          iVar3 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 + -1 == 0) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*local_18 + 0x20))();
        }
      }
    }
  }
  return bVar6;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017e4b48; name: FUN_017e4b48
 */


void FUN_017e4b48(undefined8 *param_1,long param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *local_28;
  
  lVar6 = *(long *)(param_2 + 0xc0);
  do {
    if (lVar6 == param_2 + 0xb8) {
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
    lVar7 = *(long *)(lVar6 + 0x10);
    if (*param_3 == 0) {
      if (*(long *)(lVar7 + 0x68) == 0) {
LAB_017e4b7c:
        FUN_017e62ec(*(undefined8 *)(lVar6 + 0x10));
        return;
      }
    }
    else {
      FUN_009b3e90(&local_28);
      plVar5 = local_28;
      plVar8 = *(long **)(lVar7 + 0x68);
      if (local_28 != (long *)0x0) {
        lVar7 = local_28[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
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
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (**(code **)(*local_28 + 0x20))(local_28);
        }
      }
      if (plVar8 == plVar5) goto LAB_017e4b7c;
    }
    lVar6 = *(long *)(lVar6 + 8);
  } while( true );
}



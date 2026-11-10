/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017d9c14; name: FUN_017d9c14
 */


undefined8 FUN_017d9c14(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long *local_40;
  long *local_38;
  
  lVar7 = *(long *)(param_1 + 0xf0);
  do {
    if (lVar7 == param_1 + 0xe8) {
      return 0;
    }
    if (*(long *)(lVar7 + 0x18) == 0) {
      local_38 = (long *)0x0;
      if (*param_2 == 0) goto LAB_017d9c50;
LAB_017d9cd4:
      FUN_017dca7c(&local_40);
      bVar5 = local_38 == local_40;
      if (local_40 == (long *)0x0) goto joined_r0x017d9d0c;
      lVar6 = local_40[0xb];
      piVar1 = (int *)(lVar6 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 != 0) goto joined_r0x017d9d0c;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_40 + 0x20))(local_40);
      if (local_38 != (long *)0x0) goto LAB_017d9c64;
LAB_017d9c80:
      if (bVar5) {
        return 1;
      }
    }
    else {
      FUN_017dca7c(&local_38);
      if (*param_2 != 0) goto LAB_017d9cd4;
LAB_017d9c50:
      bVar5 = local_38 == (long *)0x0;
      local_40 = (long *)0x0;
joined_r0x017d9d0c:
      if (local_38 == (long *)0x0) goto LAB_017d9c80;
LAB_017d9c64:
      lVar6 = local_38[0xb];
      piVar1 = (int *)(lVar6 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 != 0) goto LAB_017d9c80;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
      if (bVar5) {
        return 1;
      }
    }
    lVar7 = *(long *)(lVar7 + 8);
  } while( true );
}



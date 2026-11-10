/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d401c8; name: FUN_00d401c8
 */


uint FUN_00d401c8(long param_1,long *param_2,undefined4 param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *local_38;
  
  lVar7 = *(long *)(param_1 + 0x560);
  if ((lVar7 != 0) && (param_2 = (long *)*param_2, param_2 != (long *)0x0)) {
    lVar8 = param_2[0xb];
    local_38 = param_2;
    if (*(undefined8 **)(lVar8 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar8 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
        *(undefined8 *)(lVar8 + 0x10) = uVar6;
      }
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      uVar5 = FUN_027f7ebc(lVar7,&local_38,param_3,param_4 & 1);
      if (local_38 != (long *)0x0) {
        lVar7 = local_38[0xb];
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
          (**(code **)(*local_38 + 0x20))();
        }
      }
      return uVar5 & 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}



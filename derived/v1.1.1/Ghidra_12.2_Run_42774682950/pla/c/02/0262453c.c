/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0262453c; name: FUN_0262453c
 */


undefined8 FUN_0262453c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *local_58;
  undefined8 local_28;
  
  uVar2 = FUN_026246f4(param_1);
  lVar3 = FUN_0262471c(uVar2,param_2);
  lVar4 = FUN_02624748(param_1);
  if (lVar4 == 0) goto LAB_026246a8;
  lVar5 = FUN_02624770(lVar3,lVar4);
  plVar6 = (long *)FUN_026247e0(param_1,lVar5);
  if ((undefined8 *)*plVar6 != (undefined8 *)0x0) {
    local_58 = *(undefined8 **)*plVar6;
    do {
      bVar1 = false;
      if (local_58 != (undefined8 *)0x0) {
        lVar7 = FUN_02624814(local_58);
        bVar1 = true;
        if (lVar7 != lVar3) {
          uVar2 = FUN_02624814(local_58);
          lVar7 = FUN_02624770(uVar2,lVar4);
          bVar1 = lVar7 == lVar5;
        }
      }
      if (!bVar1) break;
      lVar7 = FUN_02624814(local_58);
      if (lVar7 == lVar3) {
        uVar2 = FUN_0262482c(0,param_1);
        lVar7 = FUN_026248a0(local_58);
        uVar8 = FUN_02624854(uVar2,lVar7 + 0x10,param_2);
        if ((uVar8 & 1) != 0) goto LAB_02624660;
      }
      local_58 = (undefined8 *)*local_58;
    } while( true );
  }
  bVar1 = false;
  goto LAB_02624698;
LAB_02624660:
  FUN_026248c4(&local_28,local_58);
  bVar1 = true;
LAB_02624698:
  if (bVar1) {
    return local_28;
  }
LAB_026246a8:
  uVar2 = FUN_026248e4(param_1);
  return uVar2;
}



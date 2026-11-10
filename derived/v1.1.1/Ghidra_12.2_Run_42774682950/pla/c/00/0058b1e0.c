/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0058b1e0; name: FUN_0058b1e0
 */


undefined8 * FUN_0058b1e0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  if (param_1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)FUN_002ebd80(0x20);
    *puVar2 = &PTR_FUN_04189f18;
    plVar6 = *(long **)(param_1 + 0x18);
    if (plVar6 != (long *)0x0) {
      lVar5 = plVar6[1];
      puVar7 = (undefined8 *)0x0;
      if (lVar5 == 0) goto LAB_0058b260;
      do {
        puVar3 = (undefined8 *)FUN_002ebd80(0x10);
        uVar4 = FUN_002ec2d0(lVar5);
        puVar3[1] = uVar4;
        while( true ) {
          puVar1 = puVar2 + 3;
          if (puVar7 != (undefined8 *)0x0) {
            puVar1 = puVar7;
          }
          *puVar1 = puVar3;
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_0058b268;
          lVar5 = plVar6[1];
          puVar7 = puVar3;
          if (lVar5 != 0) break;
LAB_0058b260:
          puVar3 = (undefined8 *)0x0;
        }
      } while( true );
    }
LAB_0058b268:
    FUN_0058b5f0(param_1 + 8,puVar2 + 1);
  }
  return puVar2;
}



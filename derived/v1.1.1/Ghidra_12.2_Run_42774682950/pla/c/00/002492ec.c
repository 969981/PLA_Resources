/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002492ec; name: FUN_002492ec
 */


void FUN_002492ec(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar2 = FUN_002424d0(param_1,6);
  lVar3 = FUN_00242728(param_1,0x12);
  if (lVar3 != 0) {
    lVar4 = FUN_00244288(param_1);
    uVar5 = *(undefined8 *)(lVar4 + 0x20);
    lVar4 = FUN_00244288(param_1);
    uVar5 = FUN_0022fc40(uVar5,*(undefined2 *)(lVar4 + 0x4a));
    uVar1 = FUN_0087d8bc(uVar5,4,3,"uProceduralShape");
    *(undefined4 *)(lVar3 + 4) = uVar1;
    if (param_2 != (long *)0x0) {
      lVar3 = FUN_00250f00(param_3,0x10,0x120);
      *param_2 = *param_2 + lVar3;
      if ((*(byte *)(lVar2 + 4) >> 4 & 1) != 0) {
        lVar2 = FUN_00250f00(param_3,0x10,0x230);
        *param_2 = *param_2 + lVar2;
        lVar2 = FUN_00250f00(param_3,0x10,0x120);
        *param_2 = *param_2 + lVar2;
      }
    }
  }
  return;
}



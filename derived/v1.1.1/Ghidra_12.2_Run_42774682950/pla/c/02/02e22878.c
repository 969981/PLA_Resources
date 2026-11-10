/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e22878; name: FUN_02e22878
 */


undefined8
FUN_02e22878(undefined8 *param_1,long param_2,undefined4 param_3,undefined4 param_4,short param_5)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  plVar1 = (long *)(**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,0x80);
  uVar2 = 0;
  if (plVar1 != (long *)0x0) {
    plVar1[5] = 0;
    plVar1[3] = 0;
    *(undefined4 *)(plVar1 + 4) = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
    if (param_1[4] == 0) {
      param_1[4] = plVar1;
      *plVar1 = 0;
    }
    else {
      *plVar1 = param_1[4];
      param_1[4] = plVar1;
    }
    *(short *)((long)plVar1 + 0x7a) = param_5;
    plVar1[1] = param_2;
    *(undefined4 *)((long)plVar1 + 0x74) = 0;
    *(undefined1 *)(plVar1 + 0xf) = 0;
    uVar2 = FUN_02e22960(param_4,1,(int)param_5,param_3,plVar1 + 6);
    uVar3 = FUN_02e22a48(param_1,param_2,plVar1 + 6,uVar2);
    uVar2 = 0;
    if ((uVar3 & 1) != 0) {
      if (*(short *)((long)plVar1 + 0x7a) == 0) {
        *(undefined4 *)(plVar1 + 0xe) = 0;
      }
      else {
        *(undefined4 *)(plVar1 + 0xc) = 0;
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a3cd0; name: FUN_031a3cd0
 */


undefined8
FUN_031a3cd0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
            undefined8 param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  cVar1 = *(char *)(param_3 + 4);
  if (cVar1 != '\x02') {
    if (cVar1 != '\x01') {
      if (cVar1 != '\0') {
        return 1;
      }
      FUN_033299e0(0x8658a7);
      iVar3 = FUN_031a23bc(param_1,param_2,param_3 + 8,param_3 + 0xc,param_4);
      if (iVar3 == 0) {
        uVar2 = 0xd5723aad;
        goto LAB_031a3dc0;
      }
      *(undefined1 *)(param_3 + 4) = 1;
      *(undefined8 *)(param_3 + 8) = 0;
    }
    FUN_033299e0(0xa9b49f3d);
    iVar3 = FUN_031a2968(param_1,param_2,param_3 + 8,param_3 + 0xc,param_4,param_5);
    if (iVar3 == 0) {
      uVar2 = 0x1b61be2b;
LAB_031a3dc0:
      FUN_033299e0(uVar2);
      return 0;
    }
    *(undefined1 *)(param_3 + 4) = 2;
    *(undefined8 *)(param_3 + 8) = 0;
  }
  FUN_033299e0(0x5384e468);
  FUN_031a3034(param_1,param_4);
  *(undefined1 *)(param_3 + 4) = 3;
  *(undefined8 *)(param_3 + 8) = 0;
  return 1;
}



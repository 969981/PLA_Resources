/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042d610; name: FUN_0042d610
 */


undefined8 FUN_0042d610(long param_1,byte *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = 0;
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x18);
    uVar2 = 0;
    if (lVar1 != 0) {
      lVar3 = *(long *)(param_1 + 0x20);
      if (lVar3 == 0) {
        lVar3 = FUN_0042df90();
        *(long *)(param_1 + 0x20) = lVar3;
        if (lVar3 == 0) {
          return 0;
        }
        lVar1 = *(long *)(param_1 + 0x18);
      }
      uVar2 = FUN_0043c4a0(lVar1,lVar3,param_2,param_3,param_4);
      if ((int)uVar2 != 0) {
        if ((*(byte *)**(undefined8 **)(param_1 + 0x18) >> 1 & 1) == 0) {
          *(uint *)(param_1 + 0x34) = *param_2 & 0xfe;
        }
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}



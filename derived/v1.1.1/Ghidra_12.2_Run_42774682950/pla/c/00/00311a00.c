/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00311a00; name: FUN_00311a00
 */


undefined8 FUN_00311a00(ulong *param_1,undefined8 param_2)

{
  byte *pbVar1;
  uint uVar2;
  ulong uVar3;
  
  do {
    pbVar1 = (byte *)*param_1;
    if (pbVar1 < (byte *)param_1[1]) {
      uVar2 = (uint)*pbVar1;
      if ((char)*pbVar1 < '\0') goto LAB_00311a60;
      *param_1 = (ulong)(pbVar1 + 1);
      *(uint *)(param_1 + 4) = uVar2;
    }
    else {
      uVar2 = 0;
LAB_00311a60:
      uVar2 = FUN_003107ec(param_1,uVar2);
      *(uint *)(param_1 + 4) = uVar2;
    }
    if ((uVar2 == 0) || ((uVar2 & 7) == 4)) {
      return 1;
    }
    uVar3 = FUN_00311758(param_1,uVar2,param_2);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
  } while( true );
}



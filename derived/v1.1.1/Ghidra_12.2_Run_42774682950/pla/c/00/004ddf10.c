/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004ddf10; name: FUN_004ddf10
 */


undefined8 FUN_004ddf10(int *param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  *param_3 = 0;
  param_1[0x19e] = 0;
  if ((((*param_1 < 0x301) || ((*(byte *)((long)param_1 + 0x5cd) >> 6 & 1) != 0)) ||
      (iVar1 = FUN_004e2fc0(param_1,10,0,0,0), iVar1 == 0)) ||
     (lVar3 = *(long *)(param_2 + 0x288), *(int *)(lVar3 + 0x100) == 0)) {
    return 2;
  }
  uVar2 = FUN_004ddfa0(param_1,*(undefined8 *)(lVar3 + 0xf0),*(undefined8 *)(lVar3 + 0xf8),
                       param_2 + 0x30,*(undefined8 *)(param_2 + 0x28),param_3);
  return uVar2;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0033bb20; name: FUN_0033bb20
 */


bool FUN_0033bb20(uint *param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  uint *puVar6;
  int local_34;
  
  if (param_2 == 0) {
    iVar4 = 0;
LAB_0033bc14:
    return iVar4 == param_2;
  }
  puVar1 = (uint *)((long)param_1 + (long)param_2);
  puVar2 = param_1;
  if (6 < param_2) {
    puVar2 = (uint *)((long)puVar1 - 7);
  }
  uVar5 = (ulong)param_1 & 7;
  puVar6 = param_1;
  if (param_1 < puVar1) goto joined_r0x0033bb9c;
LAB_0033bbbc:
  if ((puVar6 < puVar2) && (uVar5 == 0)) {
    do {
      if (((puVar6[1] | *puVar6) & 0x80808080) != 0) break;
      puVar6 = puVar6 + 2;
    } while (puVar6 < puVar2);
  }
  do {
    if (puVar6 < puVar1) {
      do {
        if ((char)*puVar6 < '\0') goto LAB_0033bb68;
        puVar6 = (uint *)((long)puVar6 + 1);
      } while (puVar1 != puVar6);
      puVar6 = puVar1;
    }
LAB_0033bb68:
    iVar4 = (int)puVar6 - (int)param_1;
    iVar4 = FUN_0033b920(&DAT_04153948,(long)param_1 + (long)iVar4,param_2 - iVar4,&local_34);
    puVar6 = (uint *)((long)puVar6 + (long)local_34);
    if (iVar4 != 0xfd) {
      iVar4 = (int)puVar6 - (int)param_1;
      goto LAB_0033bc14;
    }
    while( true ) {
      uVar5 = (ulong)puVar6 & 7;
      if (puVar1 <= puVar6) goto LAB_0033bbbc;
joined_r0x0033bb9c:
      bVar3 = uVar5 == 0;
      uVar5 = 0;
      if (bVar3) goto LAB_0033bbbc;
      if ((char)*puVar6 < '\0') break;
      puVar6 = (uint *)((long)puVar6 + 1);
    }
  } while( true );
}



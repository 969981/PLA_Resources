/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ecc620; name: FUN_02ecc620
 */


undefined8 FUN_02ecc620(undefined8 *param_1,int *param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  
  if (*param_2 != 0) {
    *(undefined4 *)(param_1 + 0x4a) = 0;
    FUN_02ecc8a4(param_1,1,0x1000000,*(undefined8 *)param_2,param_2[2]);
  }
  if (((param_3 & 1) == 0) && ((*(byte *)((long)param_1 + 0x2a2) & 7) != 1)) {
    if (DAT_0440a480 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)(*DAT_0442d138)(5,0x18);
      if (puVar3 == (undefined8 *)0x0) {
        return 2;
      }
      *puVar3 = DAT_0440a480;
      DAT_0440a480 = puVar3;
    }
    if (DAT_0440a478 == (undefined8 *)0x0) {
      DAT_0440a470 = DAT_0440a480;
    }
    else {
      *DAT_0440a478 = DAT_0440a480;
    }
    DAT_0440a478 = DAT_0440a480;
    puVar3 = (undefined8 *)*DAT_0440a480;
    *DAT_0440a480 = 0;
    DAT_0440a480 = puVar3;
    puVar3 = DAT_0440a478;
    DAT_0440a494 = DAT_0440a494 + 1;
    DAT_0440a478[1] = param_1;
    *(int *)(puVar3 + 2) = DAT_0440a468;
    *(ushort *)((long)puVar3 + 0x14) = *(ushort *)((long)puVar3 + 0x14) & 0xfe00;
    DAT_0440a498 = 1;
    goto LAB_02ecc6c8;
  }
  *(uint *)((long)param_1 + 0x2a3) = *(uint *)((long)param_1 + 0x2a3) | 0x4000;
  if (DAT_0440a480 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)(*DAT_0442d138)(5,0x18);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = DAT_0440a480;
      DAT_0440a480 = puVar3;
      goto LAB_02ecc740;
    }
    iVar4 = 2;
    if (param_1[0x43] != 0) goto LAB_02ecc874;
LAB_02ecc7ac:
    if (param_1[0x21] == 0) goto LAB_02ecc7b4;
LAB_02ecc888:
    FUN_02edcaac(DAT_0440a158);
    lVar2 = param_1[0xd];
  }
  else {
LAB_02ecc740:
    if (DAT_0440a478 == (undefined8 *)0x0) {
      DAT_0440a470 = DAT_0440a480;
    }
    else {
      *DAT_0440a478 = DAT_0440a480;
    }
    DAT_0440a478 = DAT_0440a480;
    puVar3 = (undefined8 *)*DAT_0440a480;
    *DAT_0440a480 = 0;
    DAT_0440a480 = puVar3;
    puVar3 = DAT_0440a478;
    DAT_0440a494 = DAT_0440a494 + 1;
    DAT_0440a478[1] = param_1;
    iVar1 = DAT_0440a468;
    *(ushort *)((long)puVar3 + 0x14) = *(ushort *)((long)puVar3 + 0x14) & 0xfe00 | 1;
    iVar4 = 1;
    *(int *)(puVar3 + 2) = iVar1;
    DAT_0440a498 = 1;
    if (param_1[0x43] == 0) goto LAB_02ecc7ac;
LAB_02ecc874:
    FUN_02f0f058(DAT_0440a150);
    if (param_1[0x21] != 0) goto LAB_02ecc888;
LAB_02ecc7b4:
    lVar2 = param_1[0xd];
  }
  if (lVar2 != 0) {
    FUN_02ec6cd8();
  }
  if (iVar4 != 1) {
    return 2;
  }
LAB_02ecc6c8:
  if ((*(byte *)((long)param_1 + 0x2a2) & 7) == 2) {
    (**(code **)*param_1)(param_1,0,0);
  }
  if ((param_4 & 1) != 0) {
    DAT_0440a468 = DAT_0440a468 + 1;
  }
  return 1;
}



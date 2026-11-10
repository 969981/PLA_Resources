/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004dbc30; name: FUN_004dbc30
 */


long FUN_004dbc30(long param_1,long *param_2,void *param_3,size_t param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar3 = param_4 + 0x40;
  puVar1 = (undefined8 *)FUN_00400260(lVar3,"external/openssl/ssl/statem/statem_lib.c",0x922);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_004c99a0(param_1,0x50,0x229,0x41,"external/openssl/ssl/statem/statem_lib.c",0x926);
    lVar3 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0xa8);
    uVar6 = *(undefined8 *)(lVar2 + 0xd0);
    uVar5 = *(undefined8 *)(lVar2 + 200);
    uVar4 = *(undefined8 *)(lVar2 + 0xb8);
    puVar1[1] = *(undefined8 *)(lVar2 + 0xc0);
    *puVar1 = uVar4;
    puVar1[3] = uVar6;
    puVar1[2] = uVar5;
    lVar2 = *(long *)(param_1 + 0xa8);
    uVar4 = *(undefined8 *)(lVar2 + 0x98);
    uVar6 = *(undefined8 *)(lVar2 + 0xb0);
    uVar5 = *(undefined8 *)(lVar2 + 0xa8);
    puVar1[5] = *(undefined8 *)(lVar2 + 0xa0);
    puVar1[4] = uVar4;
    puVar1[7] = uVar6;
    puVar1[6] = uVar5;
    memcpy(puVar1 + 8,param_3,param_4);
    *param_2 = (long)puVar1;
  }
  return lVar3;
}



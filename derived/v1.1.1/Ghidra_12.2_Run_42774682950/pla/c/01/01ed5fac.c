/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ed5fac; name: FUN_01ed5fac
 */


undefined8 FUN_01ed5fac(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_18;
  
  lVar2 = *(long *)(param_1 + 0x78);
  if ((((*(int *)(lVar2 + 0x68) == 0) && (*(int *)(lVar2 + 0x88) == 0)) &&
      (*(int *)(lVar2 + 0xa8) == 0)) &&
     ((*(int *)(lVar2 + 200) == 0 && (*(int *)(lVar2 + 0xe8) == 0)))) {
    uVar1 = 0;
  }
  else {
    local_18 = 0x82dcdec11e4b902c;
    FUN_0165b1f8(&local_18,*(undefined8 *)(lVar2 + 0x250),&DAT_cbf29ce484222645,
                 &DAT_cbf29ce484222645,&DAT_cbf29ce484222645,&DAT_cbf29ce484222645);
    uVar1 = 1;
  }
  return uVar1;
}



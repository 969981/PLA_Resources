/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d156e0; name: FUN_00d156e0
 */


void FUN_00d156e0(long param_1,char param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  *(char *)(param_1 + 0x50) = param_2;
  if (param_2 == '\x01') {
    uVar3 = 1;
  }
  else {
    switch(param_2) {
    case '\x03':
      uVar3 = 3;
      break;
    case '\x04':
      uVar3 = 4;
      break;
    case '\x05':
      uVar3 = 5;
      break;
    default:
      FUN_010c4b40(2);
      puVar1 = (undefined8 *)FUN_00d1603c();
      uVar2 = *puVar1;
      *(undefined8 *)PTR_DAT_0437b198 = uVar2;
      uVar3 = 2;
      if (param_2 != '\x02') {
        uVar3 = 1;
      }
      goto LAB_00d1571c;
    case '\a':
      uVar3 = 6;
      break;
    case '\b':
      uVar3 = 7;
      break;
    case '\t':
      uVar3 = 8;
      break;
    case '\n':
      uVar3 = 9;
    }
  }
  FUN_010c4b40(uVar3);
  puVar1 = (undefined8 *)FUN_00d1603c();
  uVar2 = *puVar1;
  *(undefined8 *)PTR_DAT_0437b198 = uVar2;
LAB_00d1571c:
  FUN_02c2c440(uVar2,uVar3);
  return;
}



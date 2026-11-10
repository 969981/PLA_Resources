/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c8254; name: FUN_032c8254
 */


void FUN_032c8254(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  char *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  int local_38;
  undefined4 uStack_34;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x38d490);
  if (lVar2 == 0) {
    lVar2 = FUN_0333d16c(0,1);
    *(long *)(lVar1 + 0x38d490) = lVar2;
    if (lVar2 == 0) {
      lVar2 = FUN_0333d16c(0,1);
      *(long *)(lVar1 + 0x38d490) = lVar2;
    }
  }
  local_48 = FUN_032cf8a8(*(undefined8 *)(*(long *)(lVar2 + 8) + 0x58),param_2);
  local_50 = "buffer_easyAlloc";
  uStack_40 = 0;
  local_38 = (int)param_2 - (int)local_48;
  uStack_34 = 0xffffffff;
  FUN_032d4f4c(param_1,&local_50,1);
  return;
}



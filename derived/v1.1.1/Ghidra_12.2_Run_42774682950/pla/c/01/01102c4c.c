/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01102c4c; name: FUN_01102c4c
 */


void FUN_01102c4c(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  void *__dest;
  undefined1 *local_bb0;
  undefined1 local_ba8;
  undefined8 local_ba0 [3];
  undefined2 local_b88 [2];
  undefined4 local_b84;
  undefined2 local_b80 [2];
  undefined8 local_b7c;
  undefined1 local_b74 [4];
  undefined4 local_b70 [2];
  undefined8 local_b68 [7];
  undefined1 local_b30 [4];
  undefined4 local_b2c;
  undefined8 local_b28 [351];
  
  lVar2 = *param_2;
  if (*(long *)(param_1 + 0x88) == lVar2) {
    lVar2 = 0;
  }
  else if (*(long *)(param_1 + 0xd8) == lVar2) {
    lVar2 = 1;
  }
  else if (*(long *)(param_1 + 0x128) == lVar2) {
    lVar2 = 2;
  }
  else if (*(long *)(param_1 + 0x178) == lVar2) {
    lVar2 = 3;
  }
  else {
    if (*(long *)(param_1 + 0x1c8) != lVar2) {
      if (*(long *)(param_1 + 0x200) == lVar2) {
        __dest = (void *)(param_1 + 0x200);
      }
      else if (*(long *)(param_1 + 0xd80) == lVar2) {
        __dest = (void *)(param_1 + 0xd80);
      }
      else if (*(long *)(param_1 + 0x1900) == lVar2) {
        __dest = (void *)(param_1 + 0x1900);
      }
      else if (*(long *)(param_1 + 0x2480) == lVar2) {
        __dest = (void *)(param_1 + 0x2480);
      }
      else {
        if (*(long *)(param_1 + 0x3000) != lVar2) {
          return;
        }
        __dest = (void *)(param_1 + 0x3000);
      }
      memset(&local_bb0,0,0xb80);
      local_bb0 = &DAT_cbf29ce484222645;
      local_ba8 = 0;
      lVar2 = 0;
      do {
        lVar1 = lVar2 + 0x90;
        *(undefined4 *)((long)local_b88 + lVar2 + 4) = 0;
        *(undefined2 *)((long)local_b80 + lVar2) = 0;
        *(undefined8 *)((long)local_b80 + lVar2 + 4) = 0xffffffff00000000;
        *(undefined8 *)((long)local_ba0 + lVar2 + 0x10) = 0;
        *(undefined2 *)((long)local_b88 + lVar2) = 0;
        local_b74[lVar2] = 0;
        *(undefined4 *)((long)local_b70 + lVar2) = 0;
        *(undefined1 **)((long)local_b68 + lVar2 + 0x30) = &DAT_cbf29ce484222645;
        local_b30[lVar2] = 0;
        *(undefined4 *)(local_b30 + lVar2 + 4) = 0;
        *(undefined1 **)((long)local_b28 + lVar2) = &DAT_cbf29ce484222645;
        *(undefined8 *)((long)local_ba0 + lVar2) = 0;
        *(undefined8 *)((long)local_ba0 + lVar2 + 8) = 0;
        *(undefined1 **)((long)local_b68 + lVar2) = &DAT_cbf29ce484222645;
        *(undefined1 **)((long)local_b68 + lVar2 + 8) = &DAT_cbf29ce484222645;
        *(undefined1 **)((long)local_b68 + lVar2 + 0x10) = &DAT_cbf29ce484222645;
        *(undefined8 *)((long)local_b68 + lVar2 + 0x18) = 0;
        *(undefined8 *)((long)local_b68 + lVar2 + 0x20) = 0;
        *(undefined8 *)((long)local_b68 + lVar2 + 0x28) = 0;
        lVar2 = lVar1;
      } while (lVar1 != 0xb40);
      memcpy(__dest,&local_bb0,0xb79);
      return;
    }
    lVar2 = 4;
  }
  param_1 = param_1 + lVar2 * 0x50;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0xffffffff00000000;
  *(undefined1 **)(param_1 + 0x88) = &DAT_cbf29ce484222645;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  return;
}



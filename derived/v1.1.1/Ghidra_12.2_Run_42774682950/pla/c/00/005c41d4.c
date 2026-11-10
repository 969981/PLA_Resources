/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005c41d4; name: FUN_005c41d4
 */


void FUN_005c41d4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 local_168;
  int local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_130 [2];
  undefined1 auStack_120 [240];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_140 = *(undefined8 *)(param_3 + 0x28);
  local_138 = *(undefined4 *)(param_3 + 0x30);
  if (*(long *)(param_3 + 0x18) != 0) {
                    /* try { // try from 005c4218 to 005c421f has its CatchHandler @ 005c42c0 */
    lStack_148 = param_3;
    FUN_005c4304(&local_168);
    while (local_160 != 2) {
      lVar1 = 0;
      do {
        lVar2 = lVar1;
        *(undefined8 *)((long)local_130 + lVar2 + 8) = uStack_150;
        *(undefined8 *)((long)local_130 + lVar2) = local_158;
                    /* try { // try from 005c4284 to 005c428b has its CatchHandler @ 005c42e0 */
        FUN_005c4304(&local_168);
        if (lVar2 == 0xf0) break;
        lVar1 = lVar2 + 0x10;
      } while (local_160 != 2);
                    /* try { // try from 005c4260 to 005c426b has its CatchHandler @ 005c42d0 */
      FUN_005c43fc(param_1,param_1[1],local_130,auStack_120 + lVar2);
    }
  }
  return;
}



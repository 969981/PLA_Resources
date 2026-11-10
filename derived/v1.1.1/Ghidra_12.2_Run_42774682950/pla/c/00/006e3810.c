/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006e3810; name: FUN_006e3810
 */


void FUN_006e3810(long param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  size_t __n;
  void *__dest;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong local_b0;
  long lStack_a8;
  undefined8 local_a0;
  ulong local_90;
  size_t sStack_88;
  void *local_80;
  long *local_78;
  ulong local_70;
  long lStack_68;
  undefined8 local_60;
  
  if (*(long *)(param_2 + 0x18) != 0) {
    sStack_88 = *(long *)(param_1 + 0x20);
                    /* try { // try from 006e3844 to 006e384b has its CatchHandler @ 006e3a40 */
    FUN_00634138(&local_90,*(undefined8 *)(sStack_88 + 0x18));
    puVar1 = PTR_LAB_04373088;
    local_60 = local_80;
    lStack_68 = sStack_88;
    local_70 = local_90;
    if (local_90 != 0) {
      pbVar4 = *(byte **)(local_90 + 8);
      if ((*pbVar4 & 1) == 0) goto LAB_006e38a4;
LAB_006e38ac:
      pbVar4 = *(byte **)(pbVar4 + 0x10);
      do {
        sStack_88 = 0;
        local_80 = (void *)0x0;
        local_90 = 0;
        plVar2 = (long *)FUN_00612290();
        local_78 = plVar2;
        __n = strlen((char *)pbVar4);
        if (0xffffffffffffffef < __n) {
                    /* try { // try from 006e3a34 to 006e3a3b has its CatchHandler @ 006e3a3c */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (__n < 0x17) {
          local_90 = CONCAT71(local_90._1_7_,(char)((int)__n << 1));
          __dest = (void *)((ulong)&local_90 | 1);
          if (__n != 0) goto LAB_006e3924;
        }
        else {
          uVar5 = __n + 0x10 & 0xfffffffffffffff0;
          __dest = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar5,1);
          local_90 = uVar5 | 1;
          sStack_88 = __n;
          local_80 = __dest;
LAB_006e3924:
          memcpy(__dest,pbVar4,__n);
        }
        *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 006e3938 to 006e3943 has its CatchHandler @ 006e3a54 */
        lVar3 = FUN_006e3e58(param_2,&local_90);
        if ((local_90 & 1) != 0) {
          (**(code **)(*local_78 + 0x18))(local_78,local_80,local_90 & 0xfffffffffffffffe,1);
        }
        if (param_2 + 8 == lVar3) {
          local_a0 = local_60;
          lStack_a8 = lStack_68;
          local_b0 = local_70;
          pbVar4 = *(byte **)(local_70 + 8);
          local_80 = (void *)local_60;
          sStack_88 = lStack_68;
          local_90 = local_70;
                    /* try { // try from 006e39b8 to 006e39cb has its CatchHandler @ 006e3a48 */
          FUN_00633efc(&local_b0);
          FUN_00633cac(*(undefined8 *)(param_1 + 0x20),&local_90);
          if ((pbVar4 != (byte *)0x0) && (*(long *)(param_1 + 0x10) == 0)) {
            FUN_002ded3c(pbVar4 + 0x18);
            if ((*pbVar4 & 1) != 0) {
              FUN_002e2ea0(puVar1,*(undefined8 *)(pbVar4 + 0x10));
            }
            FUN_002e2ea0(puVar1,pbVar4);
          }
          local_60 = local_a0;
          lStack_68 = lStack_a8;
          local_70 = local_b0;
        }
        else {
          if (*(int *)(*(long *)(local_70 + 8) + 0x34) == 10) {
            FUN_006e3810(*(undefined8 *)(*(long *)(local_70 + 8) + 0x28),lVar3 + 0x40);
          }
                    /* try { // try from 006e3888 to 006e388f has its CatchHandler @ 006e3a44 */
          FUN_00633efc(&local_70);
        }
        if (local_70 == 0) {
          return;
        }
        pbVar4 = *(byte **)(local_70 + 8);
        if ((*pbVar4 & 1) != 0) goto LAB_006e38ac;
LAB_006e38a4:
        pbVar4 = pbVar4 + 1;
      } while( true );
    }
  }
  return;
}


